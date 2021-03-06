/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, GKPlayer;

@interface GKMatchEvent : NSObject {

	NSData* _data;
	GKPlayer* _recipientPlayer;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) GKPlayer * recipientPlayer;              //@synthesize recipientPlayer=_recipientPlayer - In the implementation block
-(GKPlayer *)recipientPlayer;
-(void)setRecipientPlayer:(GKPlayer *)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

