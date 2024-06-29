IF OBJECT_ID('dbo.Alarma', 'U') IS NOT NULL 
    DROP TABLE dbo.Alarma 
GO
IF OBJECT_ID('dbo.Contrato', 'U') IS NOT NULL
	DROP TABLE dbo.Contrato
GO
IF OBJECT_ID('dbo.Departamento', 'U') IS NOT NULL
	DROP TABLE dbo.Departamento
GO
IF OBJECT_ID('dbo.Deudas', 'U') IS NOT NULL
	DROP TABLE dbo.Deudas
GO
IF OBJECT_ID('dbo.Personal', 'U') IS NOT NULL
	DROP TABLE dbo.Personal
GO
IF OBJECT_ID('dbo.Quejas', 'U') IS NOT NULL
	DROP TABLE dbo.Quejas
GO
IF OBJECT_ID('dbo.Usuario', 'U') IS NOT NULL 
    DROP TABLE dbo.Usuario 
GO
CREATE TABLE Usuario (
  Id INT NOT NULL PRIMARY KEY,
  Nombre VARCHAR(255) NOT NULL,
  Apellido VARCHAR(255) NOT NULL,
  Telefono VARCHAR(255) NOT NULL,
  DNI VARCHAR(255) NOT NULL,
  Contraseña VARCHAR(255) NOT NULL,
  TIPO VARCHAR(10) NOT NULL,
  NombreUsuario VARCHAR(50) NOT NULL
);
GO
CREATE TABLE Departamento (
  Id INT NOT NULL PRIMARY KEY,
  NumDepa INT NOT NULL,
  foto IMAGE NULL,
  Dimensiones FLOAT NOT NULL,
  Precio VARCHAR(10) NOT NULL,
  Accidentes VARCHAR(200) NOT NULL,
  Piso VARCHAR(10) NOT NULL,
  Habitado VARCHAR(1) NOT NULL,
  Estado VARCHAR(1) NULL
);
GO
CREATE TABLE Inquilino (
  Id INT NOT NULL PRIMARY KEY,
  UsuarioId INT NOT NULL,
  DepartamentoId INT NOT NULL,
  Nombre VARCHAR(255) NOT NULL,
  Apellido VARCHAR(255) NOT NULL,
  Telefono VARCHAR(255) NOT NULL,
  DNI VARCHAR(255) NOT NULL,
  Contraseña VARCHAR(255) NOT NULL,
  TIPO VARCHAR(10) NOT NULL,
  NombreUsuario VARCHAR(50) NOT NULL
  FOREIGN KEY (UsuarioId) REFERENCES Usuario (Id),
  FOREIGN KEY (DepartamentoId) REFERENCES Departamento (Id)
);
GO
CREATE TABLE Contrato (
  Id INT NOT NULL PRIMARY KEY,
  FechaInicio DATE NOT NULL,
  FechaFin DATE NOT NULL,
  MetodoPago VARCHAR(255) NOT NULL,
  UsuarioId INT NOT NULL,
  DepartamentoId INT NOT NULL,
  FOREIGN KEY (UsuarioId) REFERENCES Usuario (Id),
  FOREIGN KEY (DepartamentoId) REFERENCES Departamento (Id)
);
GO
CREATE TABLE Quejas (
  Id INT NOT NULL PRIMARY KEY,
  Descripcion VARCHAR(255) NOT NULL,
  Resuelto CHAR(1) NOT NULL,
  Fecha DATE NOT NULL,
  UsuarioId INT NOT NULL,
  FOREIGN KEY (UsuarioId) REFERENCES Usuario (Id)
);
GO
CREATE TABLE Personal (
  Id INT NOT NULL PRIMARY KEY,
  HorarioEntrada TIME NOT NULL,
  HorarioSalida TIME NOT NULL,
  UsuarioId INT NOT NULL,
  Fecha INT NOT NULL,
  FOREIGN KEY (UsuarioId) REFERENCES Usuario (Id)
);
GO
CREATE TABLE Deudas (
  Id INT NOT NULL PRIMARY KEY,
  Agua DECIMAL(10,2) NOT NULL,
  Luz DECIMAL(10,2) NOT NULL,
  Internet DECIMAL(10,2) NOT NULL,
  Alquiler DECIMAL(10,2) NOT NULL,
  Deuda DECIMAL(10,2) NOT NULL,
  Seguridad DECIMAL(10,2) NOT NULL,
  Fecha DATE NOT NULL,
  UsuarioId INT NOT NULL,
  FOREIGN KEY (UsuarioId) REFERENCES Usuario (Id)
);
GO
CREATE TABLE Alarma (
  Id INT NOT NULL PRIMARY KEY,
  Fecha DATE NOT NULL,
  Hora TIME NOT NULL,
  Incendio CHAR(1) NOT NULL,
  Robo CHAR(1) NOT NULL,
  UsuarioId INT NOT NULL,
  Cantidad FLOAT NOT NULL,
  FOREIGN KEY (UsuarioId) REFERENCES Usuario (Id)
);
GO
INSERT INTO Usuario (Id,Nombre, Apellido, Telefono, DNI, Contraseña, TIPO, NombreUsuario)
VALUES (1,'Renzo','Ramirez','123456789','44444444','password','ADMIN','reramirez')
GO
INSERT INTO Usuario (Id,Nombre, Apellido, Telefono, DNI, Contraseña, TIPO, NombreUsuario)
VALUES (2,'Melany','Espinoza','123456444','44444422','password','USUARIO','mespinoza')
GO
INSERT INTO Usuario (Id,Nombre, Apellido, Telefono, DNI, Contraseña, TIPO, NombreUsuario)
VALUES (3,'Roberto','Nino','123444444','11444422','password','PERSONAL','rnino')
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_AddUsuario]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddUsuario]
END
GO
CREATE PROCEDURE [dbo].[usp_AddUsuario]( 
  @Nombre VARCHAR(255),
  @Apellido VARCHAR(255),
  @Telefono VARCHAR(255),
  @DNI VARCHAR(255),
  @Contraseña VARCHAR(255),
  @TIPO VARCHAR(10),
  @NombreUsuario VARCHAR(255),
  @Id INT OUT
) AS
   BEGIN
          INSERT INTO Usuario (Nombre, Apellido, Telefono, DNI, Contraseña,TIPO, NombreUsuario)
		  SELECT @Nombre, @Apellido, @Telefono, @DNI, @Contraseña, @TIPO, @NombreUsuario 
		  SET @Id = SCOPE_IDENTITY()
   END 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_UpdateUsuario]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateUsuario]
END
GO
CREATE PROCEDURE [dbo].[usp_UpdateUsuario](
  @Id INT,
  @Nombre VARCHAR(255),
  @Apellido VARCHAR(255),
  @Telefono VARCHAR(255),
  @DNI VARCHAR(255),
  @Contraseña VARCHAR(255),
  @TIPO VARCHAR(10),
  @NombreUsuario VARCHAR(255)
)AS
  BEGIN
        UPDATE Usuario
		SET Nombre=@Nombre, Apellido=@Apellido, Telefono=@Telefono, DNI=@DNI, Contraseña=@Contraseña, TIPO=@TIPO, NombreUsuario=@NombreUsuario
		WHERE Id=@Id
  END
GO
IF OBJECT_ID('dbo.usp_QueryAllUsuarios', 'P') IS NOT NULL
    DROP PROCEDURE dbo.usp_QueryAllUsuarios;
GO
CREATE PROCEDURE usp_QueryAllUsuarios AS
BEGIN
    SELECT * FROM Usuario;
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_DeleteUsuario]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteUsuario]
END
GO
CREATE PROCEDURE dbo.usp_DeleteUsuario(
	@Id INT
) AS
	BEGIN
		UPDATE Usuario
		SET TIPO='I'
		WHERE Id=@Id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_AddApartment]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddApartment]
END
GO
CREATE PROCEDURE [dbo].[usp_AddApartment](
  @NumDepa INT,
  @foto IMAGE,
  @Dimensiones Float,
  @Precio Float,
  @Accidentes VARCHAR(200),
  @Piso VARCHAR(10),
  @Habitado VARCHAR(1),
  @Estado VARCHAR(1),
  @Id INT OUT
) AS 
   BEGIN 
         INSERT INTO Departamento(NumDepa, foto, Dimensiones, Precio, Accidentes, Piso, Habitado, Estado)
		 SELECT  @NumDepa, @foto, @Dimensiones, @Precio, @Accidentes,@Piso , @Habitado, @Estado
		 SET @Id = SCOPE_IDENTITY()
   END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_ModifyApartment]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_ModifyApartment]
END
GO
CREATE PROCEDURE [dbo].[usp_ModifyApartment](
  @Id INT,
  @NumDepa INT,
  @foto IMAGE,
  @Dimensiones Float,
  @Precio Float,
  @Accidentes VARCHAR(200),
  @Piso VARCHAR(10),
  @Habitado VARCHAR(1),
  @Estado VARCHAR(1)
)AS
  BEGIN
        UPDATE Departamento
		SET NumDepa=@NumDepa, foto=@foto, Dimensiones=@Dimensiones, Precio=@Precio, Accidentes=@Accidentes, Piso=@Piso, Habitado=@Habitado, Estado=@Estado
		WHERE Id=@Id
  END
GO
IF OBJECT_ID('dbo.usp_ConsultaDepa', 'P') IS NOT NULL
    DROP PROCEDURE dbo.usp_ConsultaDepa;
GO
CREATE PROCEDURE usp_ConsultaDepa AS
BEGIN
    SELECT * FROM Departamento;
END
GO
IF OBJECT_ID('dbo.usp_ConsultaDepaByID', 'P') IS NOT NULL
    DROP PROCEDURE dbo.usp_ConsultaDepaByID;
GO
CREATE PROCEDURE usp_ConsultaDepaByID(
    @ID VARCHAR(100)
) AS
BEGIN
    SELECT * FROM Departamento
    WHERE Id = @ID;
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_DeleteApartment]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteApartment]
END
GO
CREATE PROCEDURE dbo.usp_DeleteApartment(
	@Id INT
) AS
	BEGIN
		UPDATE Departamento
		SET Habitado='Inhabitado'
		WHERE Id=@Id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_AddDeuda]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddDeuda]
END
GO
CREATE PROCEDURE [dbo].[usp_AddDeuda]( 
  @Agua DECIMAL(10,2),
  @Luz DECIMAL(10,2),
  @Internet DECIMAL(10,2),
  @Alquiler DECIMAL(10,2),
  @Fecha DATE,
  @UsuarioId INT,
  @Id INT OUT
) AS
   BEGIN
          INSERT INTO Deudas(Agua, Luz, Internet, Alquiler, Fecha, UsuarioId)
		  SELECT @Agua, @Luz, @Internet, @Alquiler, @Fecha, @UsuarioId 
		  SET @Id = SCOPE_IDENTITY()
   END 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_ModifyDeuda]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_ModifyDeuda]
END
GO
CREATE PROCEDURE [dbo].[usp_ModifyDeuda](
  @Id INT,
  @Agua DECIMAL(10,2),
  @Luz DECIMAL(10,2),
  @Internet DECIMAL(10,2),
  @Alquiler DECIMAL(10,2),
  @Fecha DATE,
  @UsuarioId INT
)AS
  BEGIN
        UPDATE Deudas
		SET Agua=@Agua, Luz=@Luz, Internet=@Internet, Alquiler=@Alquiler, Fecha=@Fecha, UsuarioId=@UsuarioId
		WHERE Id=@Id
  END
--
GO
IF OBJECT_ID('dbo.usp_ConsultaDeuda', 'P') IS NOT NULL
    DROP PROCEDURE dbo.usp_ConsultaDeuda;
GO
CREATE PROCEDURE usp_ConsultaDeuda AS
BEGIN
    SELECT * FROM Deudas;
END
GO
IF OBJECT_ID('dbo.usp_ConsultaDeudaByID', 'P') IS NOT NULL
    DROP PROCEDURE dbo.usp_ConsultaDeudaByID;
GO
CREATE PROCEDURE usp_ConsultaDeudaByID(
    @ID VARCHAR(100)
) AS
BEGIN
    SELECT * FROM Deudas
    WHERE Id = @ID;
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_DeleteDeuda]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteDeuda]
END
GO
CREATE PROCEDURE dbo.usp_DeleteDeuda(
	@Id INT
) AS
	BEGIN
		UPDATE Deudas
		SET Deuda= 0 
		WHERE Id=@Id
	END
--
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_RegistrarAlarma]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_RegistrarAlarma]
END
GO
CREATE PROCEDURE [dbo].[usp_RegistrarAlarma]( 
  @Fecha DATE,
  @Hora TIME,
  @Incendio CHAR(1),
  @Robo CHAR(1),
  @UsuarioId INT,
  @Cantidad FLOAT,
  @Id INT OUT
)AS
BEGIN 
    INSERT INTO Alarma (Fecha,Hora, Incendio, Robo, UsuarioId, Cantidad)
	SELECT @Fecha, @Hora, @Incendio, @Robo, @UsuarioId, @Cantidad
	SET @Id = SCOPE_IDENTITY()
END
--
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_UpdateAlarma]') 
                   and OBJECTPROPERTY(Id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateAlarma]
END
GO
CREATE PROCEDURE [dbo].[usp_UpdateAlarma](
  @Id INT,
  @Fecha DATE,
  @Hora TIME,
  @Incendio CHAR(1),
  @Robo CHAR(1),
  @UsuarioId INT,
  @Cantidad FLOAT
)AS
  BEGIN
        UPDATE Alarma
		SET Fecha=@Fecha, Hora=@Hora, Incendio=@Incendio, Robo=@Robo, UsuarioId=@UsuarioId, Cantidad=@Cantidad
		WHERE Id=@Id
  END
  GO
IF OBJECT_ID('dbo.usp_QueryAllAlarma', 'P') IS NOT NULL
    DROP PROCEDURE dbo.usp_QueryAllAlarma;
GO
CREATE PROCEDURE usp_QueryAllAlarma AS
BEGIN
    SELECT * FROM Alarma;
END
--
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  Id = object_id(N'[dbo].[usp_DeleteAlarma]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteAlarma]
END
GO
CREATE PROCEDURE dbo.usp_DeleteAlarma(
	@Id INT
) AS
	BEGIN
		UPDATE Alarma
		SET Incendio='0'
		WHERE Id=@Id
	END
GO