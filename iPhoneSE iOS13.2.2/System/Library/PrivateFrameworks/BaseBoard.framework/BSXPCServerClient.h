/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSXPCServerClient <NSObject>
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@required
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(NSObject*<OS_xpc_object>)connection;

@end

