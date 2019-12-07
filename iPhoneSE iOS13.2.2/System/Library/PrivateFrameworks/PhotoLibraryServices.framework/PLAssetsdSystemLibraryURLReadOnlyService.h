/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdSystemLibraryURLReadOnlyServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnectionAuthorization:(id)arg1 ;
-(void)systemPhotoLibraryURL:(/*^block*/id)arg1 ;
@end
