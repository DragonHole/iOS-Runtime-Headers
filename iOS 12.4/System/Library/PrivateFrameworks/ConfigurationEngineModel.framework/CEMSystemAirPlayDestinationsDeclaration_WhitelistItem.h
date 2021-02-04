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

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase {

	NSString* _payloadDeviceID;

}

@property (nonatomic,copy) NSString * payloadDeviceID;              //@synthesize payloadDeviceID=_payloadDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithDeviceID:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDeviceID:(NSString *)arg1 ;
-(NSString *)payloadDeviceID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
