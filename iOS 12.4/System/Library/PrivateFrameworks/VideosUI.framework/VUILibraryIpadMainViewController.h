/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUILibraryFetchControllerViewController.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>
#import <libobjc.A.dylib/VUILibrarySplitViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class VUILibrarySplitViewController, VUIDownloadViewController, VUIMediaEntitiesFetchController, NSString;

@interface VUILibraryIpadMainViewController : VUILibraryFetchControllerViewController <VUIMediaEntitiesFetchControllerDelegate, VUILibrarySplitViewControllerDelegate, UIGestureRecognizerDelegate> {

	BOOL _areLocalMediaItemsAvailable;
	BOOL _hasFetchCompleted;
	VUILibrarySplitViewController* _librarySplitViewController;
	VUIDownloadViewController* _downloadViewController;
	VUIMediaEntitiesFetchController* _downloadFetchController;

}

@property (assign,nonatomic) BOOL areLocalMediaItemsAvailable;                                        //@synthesize areLocalMediaItemsAvailable=_areLocalMediaItemsAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasFetchCompleted;                                                  //@synthesize hasFetchCompleted=_hasFetchCompleted - In the implementation block
@property (nonatomic,retain) VUILibrarySplitViewController * librarySplitViewController;              //@synthesize librarySplitViewController=_librarySplitViewController - In the implementation block
@property (nonatomic,retain) VUIDownloadViewController * downloadViewController;                      //@synthesize downloadViewController=_downloadViewController - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesFetchController * downloadFetchController;               //@synthesize downloadFetchController=_downloadFetchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(id)_deviceMediaLibrary;
-(void)_addMediaLibraryNotificationObservers;
-(void)_removeMediaLibraryNotificationObservers;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(BOOL)vui_ppt_isLoading;
-(BOOL)areLocalMediaItemsAvailable;
-(void)setAreLocalMediaItemsAvailable:(BOOL)arg1 ;
-(void)setHasFetchCompleted:(BOOL)arg1 ;
-(void)_startDownloadFetchController;
-(BOOL)hasFetchCompleted;
-(void)_updateViewIfFetchHasCompleted;
-(VUILibrarySplitViewController *)librarySplitViewController;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(void)setDownloadViewController:(VUIDownloadViewController *)arg1 ;
-(VUIDownloadViewController *)downloadViewController;
-(void)setLibrarySplitViewController:(VUILibrarySplitViewController *)arg1 ;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1 ;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(void)librarySplitViewControllerDidFinishLoading:(id)arg1 withCategories:(id)arg2 error:(id)arg3 ;
-(void)librarySplitViewControllerShouldDismiss:(id)arg1 ;
-(VUIMediaEntitiesFetchController *)downloadFetchController;
-(void)setDownloadFetchController:(VUIMediaEntitiesFetchController *)arg1 ;
@end
