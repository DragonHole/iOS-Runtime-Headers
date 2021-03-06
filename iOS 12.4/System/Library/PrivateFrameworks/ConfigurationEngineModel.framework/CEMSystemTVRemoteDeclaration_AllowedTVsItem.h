/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase {

	NSString* _payloadTVDeviceID;

}

@property (nonatomic,copy) NSString * payloadTVDeviceID;              //@synthesize payloadTVDeviceID=_payloadTVDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTVDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithTVDeviceID:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTVDeviceID:(NSString *)arg1 ;
-(NSString *)payloadTVDeviceID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

