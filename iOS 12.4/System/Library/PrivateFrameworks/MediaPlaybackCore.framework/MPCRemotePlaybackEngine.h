/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPlaybackEngine.h>

@class MPCPlayerPath, NSXPCConnection;

@interface MPCRemotePlaybackEngine : MPCPlaybackEngine {

	MPCPlayerPath* _playerPath;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)requiresMainThread;
-(id)playerPath;
-(void)setWantsReverseProcessAssertion:(BOOL)arg1 ;
-(void)_updatePlayerPath;
-(void)_initializePlaybackStack;
-(void)becomeActive;
-(void)dealloc;
-(void)start;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

