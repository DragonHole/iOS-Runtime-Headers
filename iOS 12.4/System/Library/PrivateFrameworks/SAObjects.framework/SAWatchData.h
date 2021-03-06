/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL configuredForLeftWrist; 
@property (nonatomic,copy) NSString * interfaceOrientation; 
@property (assign,nonatomic) BOOL victoryDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchData;
+(id)watchDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)configuredForLeftWrist;
-(void)setConfiguredForLeftWrist:(BOOL)arg1 ;
-(BOOL)victoryDevice;
-(void)setVictoryDevice:(BOOL)arg1 ;
-(id)groupIdentifier;
-(NSString *)interfaceOrientation;
-(void)setInterfaceOrientation:(NSString *)arg1 ;
@end

