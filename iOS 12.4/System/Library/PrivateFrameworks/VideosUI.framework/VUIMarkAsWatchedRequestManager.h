/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VUIMarkAsWatchedRequestManager : NSObject {

	NSMutableDictionary* _ongoingItemIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingItemIDOperationDictionary;              //@synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableDictionary *)ongoingItemIDOperationDictionary;
-(void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3 ;
-(void)setOngoingItemIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

