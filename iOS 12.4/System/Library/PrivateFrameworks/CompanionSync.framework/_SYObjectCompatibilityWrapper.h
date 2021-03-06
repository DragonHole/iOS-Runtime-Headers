/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/SYObject.h>

@protocol SYObject;
@class NSString;

@interface _SYObjectCompatibilityWrapper : NSProxy <SYChange, SYObject> {

	id<SYObject> _syObject;
	long long _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
-(NSString *)objectIdentifier;
-(long long)changeType;
-(NSString *)sequencer;
-(id)initWithSYObject:(id)arg1 changeType:(long long)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

