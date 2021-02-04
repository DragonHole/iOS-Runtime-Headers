/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFFileCacheStore.h>

@class NSURL, NSString;

@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore> {

	NSURL* _directoryURL;

}

@property (nonatomic,copy,readonly) NSURL * directoryURL;              //@synthesize directoryURL=_directoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2 ;
-(void)fileCache:(id)arg1 storeFileWrapper:(id)arg2 ;
-(void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2 ;
-(void)removeAllFileWrappersForFileCache:(id)arg1 ;
-(id)fileURLForFileNamed:(id)arg1 ;
-(NSURL *)directoryURL;
-(id)init;
-(NSString *)description;
@end
