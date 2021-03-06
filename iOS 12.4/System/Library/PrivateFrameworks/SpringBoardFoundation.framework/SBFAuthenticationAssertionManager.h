/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBFAuthenticationAssertionTracker, NSString;

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding> {

	SBFAuthenticationAssertionTracker* _preventLockTracker;
	SBFAuthenticationAssertionTracker* _transientTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAssertion:(id)arg1 ;
-(BOOL)hasActiveAssertions;
-(BOOL)isAssertionValid:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)init;
-(NSString *)description;
@end

