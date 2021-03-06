/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCAssetStore;

@interface FCWebArchiveStore : NSObject {

	FCAssetStore* _assetStore;

}

@property (nonatomic,retain) FCAssetStore * assetStore;              //@synthesize assetStore=_assetStore - In the implementation block
-(FCAssetStore *)assetStore;
-(id)initWithStoreDirectory:(id)arg1 ;
-(id)webArchiveURLForKey:(id)arg1 ;
-(BOOL)saveWebArchiveData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)deleteWebArchiveForKey:(id)arg1 ;
-(unsigned long long)totalSizeOfAllWebArchives;
-(id)allWebArchiveKeys;
-(void)setAssetStore:(FCAssetStore *)arg1 ;
@end

