/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSIndexConnection : CSXPCConnection {

	BOOL _previouslyInitialized;
	NSMutableDictionary* _indexMap;

}

@property (nonatomic,readonly) NSMutableDictionary * indexMap;              //@synthesize indexMap=_indexMap - In the implementation block
@property (nonatomic,readonly) BOOL previouslyInitialized;                  //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedConnection;
-(void)handleError:(id)arg1 ;
-(id)indexForID:(unsigned)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleReply:(id)arg1 ;
-(void)dropIndexID:(unsigned)arg1 ;
-(void)addIndex:(id)arg1 forID:(unsigned)arg2 ;
-(BOOL)previouslyInitialized;
-(NSMutableDictionary *)indexMap;
@end

