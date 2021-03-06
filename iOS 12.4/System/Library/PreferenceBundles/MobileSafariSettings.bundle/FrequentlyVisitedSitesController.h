/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFrequentlyVisitedSitesController.h>

@class NSMutableArray, WebBookmarkCollection;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {

	NSMutableArray* _cachedFrequentlyVisitedBookmarks;
	WebBookmarkCollection* _bookmarkCollection;
	BOOL _bookmarksNeedToSave;
	BOOL _ignoreBookmarksFolderChangeNotifications;

}
+(id)sharedController;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)frequentlyVisitedSites;
-(void)clearFrequentlyVisitedSites;
-(id)initWithBookmarkCollection:(id)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2 ;
-(void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(BOOL)arg2 ;
-(void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

