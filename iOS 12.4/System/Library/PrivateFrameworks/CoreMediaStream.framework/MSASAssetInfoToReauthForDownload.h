/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSAsset, MSASAlbum;

@interface MSASAssetInfoToReauthForDownload : NSObject {

	MSAsset* _asset;
	MSASAlbum* _album;

}

@property (nonatomic,retain) MSAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;              //@synthesize album=_album - In the implementation block
-(MSASAlbum *)album;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(void)setAsset:(MSAsset *)arg1 ;
-(MSAsset *)asset;
@end

