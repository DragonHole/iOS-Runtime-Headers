/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)accessories;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)allowUnauthenticatedRequests;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
@end
