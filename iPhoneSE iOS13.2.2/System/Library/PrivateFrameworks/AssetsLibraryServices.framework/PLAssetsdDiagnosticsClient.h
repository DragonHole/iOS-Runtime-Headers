/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient
-(void)setSharedMemoryForDeferredLogging:(id)arg1 ;
-(BOOL)getPhotosXPCEndpoint:(id*)arg1 error:(id*)arg2 ;
-(BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id*)arg1 error:(id*)arg2 ;
-(BOOL)incompleteRestoreProcesses:(id*)arg1 error:(id*)arg2 ;
-(void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

