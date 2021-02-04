/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PBCodable, NSString;


@protocol INIntentExport <NSObject,JSExport>
@property (nonatomic,copy) PBCodable * backingStore; 
@property (nonatomic,readonly) NSString * utteranceString; 
@property (nonatomic,readonly) NSString * launchId; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) NSString * intentId; 
@property (nonatomic,readonly) NSString * typeName; 
@required
+(id)intentDescription;
+(NSString *)typeName;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
-(NSString *)intentId;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN2)arg1 bundle:(id)arg2;
-(NSString *)utteranceString;
-(NSString *)launchId;
-(PBCodable *)backingStore;
-(void)setBackingStore:(id)arg1;
-(NSString *)typeName;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;

@end
