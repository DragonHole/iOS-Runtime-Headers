/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase {

	NSString* _payloadEventtype;
	NSNumber* _payloadWeekdays;
	NSNumber* _payloadTime;

}

@property (nonatomic,copy) NSString * payloadEventtype;              //@synthesize payloadEventtype=_payloadEventtype - In the implementation block
@property (nonatomic,copy) NSNumber * payloadWeekdays;               //@synthesize payloadWeekdays=_payloadWeekdays - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTime;                   //@synthesize payloadTime=_payloadTime - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithEventtype:(id)arg1 withWeekdays:(id)arg2 withTime:(id)arg3 ;
+(id)buildRequiredOnlyWithEventtype:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEventtype:(NSString *)arg1 ;
-(void)setPayloadWeekdays:(NSNumber *)arg1 ;
-(void)setPayloadTime:(NSNumber *)arg1 ;
-(NSString *)payloadEventtype;
-(NSNumber *)payloadWeekdays;
-(NSNumber *)payloadTime;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

