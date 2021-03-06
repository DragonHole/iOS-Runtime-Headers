/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface FMSongAsset : NSObject {

	NSString* _assetID;
	NSString* _songUID;
	unsigned long long _assetStatus;
	NSURL* _localURL;
	double _downloadProgress;
	long long _contentVersion;
	long long _compatibilityVersion;

}

@property (readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (readonly) NSString * assetID;                          //@synthesize assetID=_assetID - In the implementation block
@property (retain) NSString * songUID;                            //@synthesize songUID=_songUID - In the implementation block
@property (readonly) unsigned long long assetStatus;              //@synthesize assetStatus=_assetStatus - In the implementation block
@property (readonly) NSURL * localURL;                            //@synthesize localURL=_localURL - In the implementation block
@property (readonly) double downloadProgress;                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
-(long long)contentVersion;
-(NSString *)assetID;
-(double)downloadProgress;
-(void)cancelDownload;
-(void)setSongUID:(NSString *)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(unsigned long long)assetStatus;
-(void)requestDownload;
-(NSString *)songUID;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)updateDownloadProgress:(double)arg1 ;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 ;
-(long long)compatibilityVersion;
-(BOOL)localURLExists;
-(BOOL)isCloudBacked;
-(void)purgeLocalCache;
-(NSURL *)localURL;
@end

