/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSNumber, NSString;

@interface SASAcousticFeature : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * acousticFeaturePerFrame; 
@property (nonatomic,copy) NSNumber * frameDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acousticFeature;
+(id)acousticFeatureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_acousticFeature;
-(id)groupIdentifier;
-(NSNumber *)frameDuration;
-(void)setFrameDuration:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSArray *)acousticFeaturePerFrame;
-(void)setAcousticFeaturePerFrame:(NSArray *)arg1 ;
@end

