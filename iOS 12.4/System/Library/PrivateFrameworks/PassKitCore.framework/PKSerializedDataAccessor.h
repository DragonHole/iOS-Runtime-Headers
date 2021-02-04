/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKFileDataAccessor.h>

@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor {

	NSData* _archiveData;

}
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeDiskRepresentation;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)archiveData;
@end
