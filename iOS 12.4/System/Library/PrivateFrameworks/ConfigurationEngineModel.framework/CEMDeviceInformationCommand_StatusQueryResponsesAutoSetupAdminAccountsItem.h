/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase {

	NSString* _statusGUID;
	NSString* _statusShortName;

}

@property (nonatomic,copy) NSString * statusGUID;                   //@synthesize statusGUID=_statusGUID - In the implementation block
@property (nonatomic,copy) NSString * statusShortName;              //@synthesize statusShortName=_statusShortName - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithGUID:(id)arg1 withShortName:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusGUID:(NSString *)arg1 ;
-(void)setStatusShortName:(NSString *)arg1 ;
-(NSString *)statusGUID;
-(NSString *)statusShortName;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
