/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_activity;
@class NSObject, NSMutableSet;

@interface SiriCoreNetworkActivity : NSObject {

	NSObject*<OS_nw_activity> _activity;
	long long _state;
	long long _parentLabel;
	NSMutableSet* _connections;

}
-(void)stop;
-(id)nwActivity;
-(void)activate;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(long long)parentLabel;
-(id)initWithLabel:(long long)arg1 parent:(id)arg2 ;
-(void)_networkActivityState:(long long)arg1 ;
-(void)_networkActivityAbort;
-(void)_networkActivityRestart;
@end

