/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber;

@interface _RWIAutomaticInspectionSession : NSObject {

	NSString* _identifier;
	NSArray* _debuggers;
	NSNumber* _pageId;
	NSString* _applicationIdentifier;
	unsigned long long _currentDebuggerIndex;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * debuggers;                //@synthesize debuggers=_debuggers - In the implementation block
-(void)_sendQuery;
-(id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3 ;
-(BOOL)receivedRejectResponse;
-(BOOL)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2 ;
-(NSArray *)debuggers;
-(NSString *)identifier;
-(void)start;
@end

