/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>

@protocol OS_dispatch_queue, NTKLibrarySelectedFaceSnapshotProviderDelegate;
@class NTKFaceCollection, NTKFace, NSString, NSObject, UIImage;

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {

	NTKFaceCollection* _libraryCollection;
	NTKFace* _selectedFace;
	NSString* _snapshotKey;
	NSObject*<OS_dispatch_queue> _snapshotRequestsQueue;
	BOOL _resumedQueue;
	id<NTKLibrarySelectedFaceSnapshotProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKLibrarySelectedFaceSnapshotProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * snapshotImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)snapshotCurrentFaceForActiveDeviceWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)snapshotCurrentFaceForDevice:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)snapshotCurrentFaceForDeviceUUID:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id<NTKLibrarySelectedFaceSnapshotProviderDelegate>)delegate;
-(void)setDelegate:(id<NTKLibrarySelectedFaceSnapshotProviderDelegate>)arg1 ;
-(UIImage *)snapshotImage;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(id)initWithDeviceUUID:(id)arg1 delegate:(id)arg2 ;
-(void)_handleSnapshotChangedNotification:(id)arg1 ;
-(void)_updateSelectedFaceAndSnapshotKey;
-(void)_notifyIfSnapshotAvailable;
-(void)_handleFaceChange:(id)arg1 ;
-(id)initWithDeviceUUID:(id)arg1 ;
-(void)snapshotSelectedFaceWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

