/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFActivityCondition.h>

@class EFObservable, NSString;

@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSatisfied,nonatomic,readonly) BOOL satisfied; 
@property (nonatomic,readonly) EFObservable * conditionsObservable; 
-(BOOL)isSatisfied;
-(EFObservable *)conditionsObservable;
@end
