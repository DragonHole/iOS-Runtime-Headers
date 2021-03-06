/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEntity.h>

@class SSURLRequestProperties, NSString, NSURLRequest, NSArray;

@interface SSDownloadAsset : SSEntity {

	long long _assetType;
	SSURLRequestProperties* _localProperties;

}

@property (readonly) long long fileSize; 
@property (readonly) NSString * downloadFileName; 
@property (readonly) NSString * downloadPath; 
@property (readonly) NSString * finalizedPath; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) SSURLRequestProperties * URLRequestProperties; 
@property (readonly) SSURLRequestProperties * _localProperties; 
@property (retain,readonly) NSURLRequest * URLRequest; 
@property (readonly) NSArray * sinfs; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setValuesMessage;
+(id)assetWithURL:(id)arg1 type:(long long)arg2 ;
-(id)copyXPCEncoding;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(SSURLRequestProperties *)_localProperties;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
-(NSArray *)sinfs;
-(long long)bytesDownloaded;
-(SSURLRequestProperties *)URLRequestProperties;
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(long long)assetType;
-(long long)bytesUploaded;
-(NSURLRequest *)URLRequest;
-(void)dealloc;
-(long long)fileSize;
-(BOOL)isExternal;
@end

