/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL applySASToFirstPartyDomains; 
@property (nonatomic,copy) NSArray * listOfSiriKitEnabledDomains; 
@property (assign,nonatomic) BOOL useSASAutoSelectionFeature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitSetting;
+(id)siriKitSettingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)applySASToFirstPartyDomains;
-(void)setApplySASToFirstPartyDomains:(BOOL)arg1 ;
-(NSArray *)listOfSiriKitEnabledDomains;
-(void)setListOfSiriKitEnabledDomains:(NSArray *)arg1 ;
-(BOOL)useSASAutoSelectionFeature;
-(void)setUseSASAutoSelectionFeature:(BOOL)arg1 ;
-(id)groupIdentifier;
@end

