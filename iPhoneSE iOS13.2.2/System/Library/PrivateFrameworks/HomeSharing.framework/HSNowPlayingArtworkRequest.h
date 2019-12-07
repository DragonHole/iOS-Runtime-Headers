/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSNowPlayingArtworkRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _playQueueIndex;
	CGSize _maximumSize;

}

@property (nonatomic,readonly) unsigned interfaceID;                 //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize;                   //@synthesize maximumSize=_maximumSize - In the implementation block
@property (nonatomic,readonly) unsigned playQueueIndex;              //@synthesize playQueueIndex=_playQueueIndex - In the implementation block
-(CGSize)maximumSize;
-(unsigned)interfaceID;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithInterfaceID:(unsigned)arg1 maximumSize:(CGSize)arg2 playQueueIndex:(unsigned)arg3 ;
-(unsigned)playQueueIndex;
@end
