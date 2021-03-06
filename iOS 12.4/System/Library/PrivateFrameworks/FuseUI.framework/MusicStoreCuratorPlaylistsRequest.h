/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class MusicStoreCuratorPlaylistsResponse;

@interface MusicStoreCuratorPlaylistsRequest : MPStoreModelRequest {

	long long _curatorStoreAdamID;
	MusicStoreCuratorPlaylistsResponse* _previousResponse;

}

@property (assign,nonatomic) long long curatorStoreAdamID;                                       //@synthesize curatorStoreAdamID=_curatorStoreAdamID - In the implementation block
@property (nonatomic,retain) MusicStoreCuratorPlaylistsResponse * previousResponse;              //@synthesize previousResponse=_previousResponse - In the implementation block
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
+(BOOL)supportsSecureCoding;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MusicStoreCuratorPlaylistsResponse *)previousResponse;
-(void)setPreviousResponse:(MusicStoreCuratorPlaylistsResponse *)arg1 ;
-(long long)curatorStoreAdamID;
-(void)setCuratorStoreAdamID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

