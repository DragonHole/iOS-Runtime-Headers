/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRadioResponse.h>

@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (nonatomic,copy,readonly) NSArray * allStorePlatformMetadata; 
-(id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg1 ;
-(NSArray *)allStorePlatformMetadata;
-(id)storePlatformMetadataForStoreAdamID:(long long)arg1 ;
@end

