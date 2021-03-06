/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface SSVPlaybackAsset : NSObject {

	NSDictionary* _assetDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * assetDictionary;              //@synthesize assetDictionary=_assetDictionary - In the implementation block
@property (nonatomic,readonly) NSString * downloadKey; 
@property (nonatomic,readonly) NSString * flavor; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * sinfs; 
-(id)initWithAssetDictionary:(id)arg1 ;
-(NSString *)downloadKey;
-(NSString *)flavor;
-(NSArray *)sinfs;
-(NSDictionary *)assetDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)URLString;
@end

