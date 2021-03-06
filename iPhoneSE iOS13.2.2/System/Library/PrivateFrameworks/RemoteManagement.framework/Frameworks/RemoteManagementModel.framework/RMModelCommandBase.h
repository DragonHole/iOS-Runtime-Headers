/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelCommandBase : RMModelPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	NSString* _commandDescription;
	RMModelAnyPayload* _commandPayload;

}

@property (nonatomic,copy) NSString * commandType;                          //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,copy) NSString * commandIdentifier;                    //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,copy) NSString * commandDescription;                   //@synthesize commandDescription=_commandDescription - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * commandPayload;              //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commandType;
-(void)setCommandType:(NSString *)arg1 ;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(BOOL)mustBeSupervised;
-(int)executionLevel;
-(NSString *)commandDescription;
-(void)setCommandDescription:(NSString *)arg1 ;
-(RMModelAnyPayload *)commandPayload;
-(void)setCommandPayload:(RMModelAnyPayload *)arg1 ;
-(BOOL)loadCommandFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializeWithType:(short)arg1 ;
@end

