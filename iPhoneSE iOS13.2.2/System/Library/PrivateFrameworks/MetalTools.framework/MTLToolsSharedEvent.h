/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsEvent.h>
#import <libobjc.A.dylib/MTLSharedEvent.h>

@class NSString;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (assign) unsigned long long signaledValue; 
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(unsigned long long)signaledValue;
-(id)newSharedEventHandle;
@end

