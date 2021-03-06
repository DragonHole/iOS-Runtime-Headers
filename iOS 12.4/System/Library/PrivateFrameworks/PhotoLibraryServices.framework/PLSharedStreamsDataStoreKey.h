/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLResourceDataStoreKey.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey : NSObject <PLResourceDataStoreKey> {

	PLSharedStreamsDataStoreKeyStruct _keyStruct;

}

@property (assign,nonatomic) PLSharedStreamsDataStoreKeyStruct keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(PLSharedStreamsDataStoreKeyStruct)keyStruct;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned)arg3 ;
-(void)setKeyStruct:(PLSharedStreamsDataStoreKeyStruct)arg1 ;
-(id)_relativeFilePath;
-(id)_fileURLWithPhotoCloudSharingDataDirectory:(id)arg1 extension:(id)arg2 ;
-(id)_store;
-(id)keyData;
-(BOOL)isValid;
@end

