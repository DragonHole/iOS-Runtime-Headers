/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKLayoutCardViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerDelegate.h>
#import <libobjc.A.dylib/MKActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/MKPlaceVenueBrowseViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceParentInfoViewControllerDelegate.h>
#import <libobjc.A.dylib/MKOfficialAppViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardPhotosControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardReviewsControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardEncyclopedicControllerDelegate.h>
#import <libobjc.A.dylib/MKTransitDepaturesViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardHeaderViewControllerDelegate.h>
#import <libobjc.A.dylib/MKTransitAttributionViewControllerDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <libobjc.A.dylib/MKETAProviderDelegate.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>
#import <libobjc.A.dylib/MKPlaceHeaderButtonsViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceServiceHoursViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardController.h>
#import <libobjc.A.dylib/_MKInfoCardAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardActionControllerDelegate.h>

@protocol _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, CNContactViewControllerPrivateDelegate, UIScrollViewDelegate;
@class GEOAutomobileOptions, GEOTransitOptions, MKPlaceActionManager, MKPlaceCardHeaderViewController, MKPlaceHeaderButtonsViewController, MKPlaceInfoViewController, MKPlaceInlineMapViewController, MKPlacePoisInlineMapViewController, MKPlaceCardFooterActionsViewController, MKPlaceCardActionsRowViewController, MKETAProvider, MKOfficialAppViewController, MKInfoCardLoadingView, CNContact, CNContactViewController, CNContactStore, NSMapTable, NSUserActivity, NSString, _MKDistanceDetailProvider, CNContactNavigationController, RadiosPreferences, _MKPlaceActionButtonController, NSMutableArray, CLLocation, MKMapItem;

@interface _MKPlaceViewController : MKLayoutCardViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, RadiosPreferencesDelegate, MKPlaceVenueBrowseViewControllerDelegate, MKPlaceParentInfoViewControllerDelegate, MKOfficialAppViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKTransitAttributionViewControllerDelegate, GEOLogContextDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, MKPlaceServiceHoursViewControllerProtocol, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate> {

	MKPlaceActionManager* _actionManager;
	MKPlaceCardHeaderViewController* _headerViewController;
	MKPlaceHeaderButtonsViewController* _buttonsHeaderController;
	MKPlaceInfoViewController* _infoViewController;
	MKPlaceInlineMapViewController* _inlineMapViewController;
	MKPlacePoisInlineMapViewController* _poisInlineMapViewController;
	MKPlaceCardFooterActionsViewController* _placeActionViewController;
	MKPlaceCardActionsRowViewController* _placeActionRowViewController;
	MKETAProvider* _etaProvider;
	BOOL _attemptedToCreateAddressBook;
	MKOfficialAppViewController* _officialAppViewController;
	MKInfoCardLoadingView* _loadingView;
	CNContact* _originalContactCopy;
	CNContactViewController* _updatingContactController;
	CNContactViewController* _creatingContactController;
	CNContactViewController* _editingContactController;
	CNContactStore* _contactStore;
	NSMapTable* _additionalViewControllers;
	BOOL _overrideDefaultShowRAP;
	BOOL _hasContactOnlyMapItem;
	BOOL _isUpdatingViewControllers;
	CGPoint _beginAnalyticsScrollingPoint;
	NSUserActivity* _donationUserActivity;
	BOOL _hasCheckedDistanceAvailability;
	BOOL _placeInBookmarks;
	BOOL _showContactActions;
	BOOL _inAirplaneModeAndNetworkUnreachable;
	NSString* _headerTitle;
	_MKDistanceDetailProvider* _distanceMonitor;
	id<_MKPlaceItem> _placeItem;
	CNContact* _contact;
	CNContact* _originalContact;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
	id<_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
	/*^block*/id _placeViewFeedbackAppLaunchHandler;
	unsigned long long _options;
	double headerHeight;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	CNContactNavigationController*<CNContactViewControllerPrivateDelegate> _contactsNavigationController;
	RadiosPreferences* _radioPreferences;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	_MKPlaceActionButtonController* _headerSecondaryButtonController;
	NSMutableArray* _viewDidAppearBlocks;
	_MKPlaceActionButtonController* _headerTertiaryButtonController;
	CLLocation* _location;

}

@property (nonatomic,retain) CNContact * originalContact;                                                                                             //@synthesize originalContact=_originalContact - In the implementation block
@property (nonatomic,retain) _MKDistanceDetailProvider * distanceMonitor;                                                                             //@synthesize distanceMonitor=_distanceMonitor - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedDistanceAvailability;                                                                                     //@synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability - In the implementation block
@property (assign,nonatomic) BOOL inAirplaneModeAndNetworkUnreachable;                                                                                //@synthesize inAirplaneModeAndNetworkUnreachable=_inAirplaneModeAndNetworkUnreachable - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;                                                                                    //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                                                                                    //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id placeViewFeedbackAppLaunchHandler;                                                                                      //@synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate;                                             //@synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;                                                   //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                                                                                   //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL showContactActions;                                                                                                 //@synthesize showContactActions=_showContactActions - In the implementation block
@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                                                                            //@synthesize placeItem=_placeItem - In the implementation block
@property (assign,nonatomic) BOOL placeInBookmarks;                                                                                                   //@synthesize placeInBookmarks=_placeInBookmarks - In the implementation block
@property (assign,nonatomic,__weak) CNContactNavigationController*<CNContactViewControllerPrivateDelegate> contactsNavigationController;              //@synthesize contactsNavigationController=_contactsNavigationController - In the implementation block
@property (assign,nonatomic) double headerHeight; 
@property (nonatomic,retain) _MKPlaceActionButtonController * headerSecondaryButtonController;                                                        //@synthesize headerSecondaryButtonController=_headerSecondaryButtonController - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * headerTertiaryButtonController;                                                         //@synthesize headerTertiaryButtonController=_headerTertiaryButtonController - In the implementation block
@property (assign,nonatomic) BOOL showTitleBar; 
@property (assign,nonatomic) BOOL hideDirectionsButtons; 
@property (assign,nonatomic) BOOL showEditButton; 
@property (assign,nonatomic) BOOL hideInlineMap; 
@property (assign,nonatomic) BOOL showInlineMapInHeader; 
@property (assign,nonatomic) BOOL showNearbyApps; 
@property (assign,nonatomic) BOOL showReportAProblem; 
@property (assign,nonatomic) BOOL disableReportAProblem; 
@property (nonatomic,retain) CLLocation * location;                                                                                                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL showSimulateLocation; 
@property (assign,nonatomic) BOOL showOpenInSkyline; 
@property (assign,nonatomic) BOOL showOpenInPinpoint; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,copy) NSString * headerTitle;                                                                                                    //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) double headerSecondaryNameLabelPadding; 
@property (assign,nonatomic) BOOL showShareActionsButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                                                                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                                                                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                                                                      //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) double contentAlpha; 
+(double)headerHeightInMinimalMode;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)logContextForLogMsgEvent:(id)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(id)initWithMapItem:(id)arg1 ;
-(id)_contactStore;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8 ;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1 ;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1 ;
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg1 ;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1 ;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1 ;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1 ;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg1 ;
-(void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 ;
-(void)hideTitle:(BOOL)arg1 ;
-(void)placeServiceViewControllerDidTapHeaderButton:(id)arg1 ;
-(void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3 ;
-(void)ETAProviderLocationUpdated:(id)arg1 ;
-(int)mapTypeForETAProvider:(id)arg1 ;
-(double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1 ;
-(void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3 ;
-(id)transitDeparturesViewControllerTraits:(id)arg1 ;
-(void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1 ;
-(void)placeCardEncyclopedicControllerDidExpandTextBlock:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1 ;
-(void)placeCardReviewsController:(id)arg1 didSelectViewReview:(id)arg2 ;
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 ;
-(void)officialAppViewControllerDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)placeParentInfoViewController:(id)arg1 didSelectParent:(id)arg2 ;
-(void)placeVenueBrowseViewController:(id)arg1 didTapOnSearchCategory:(id)arg2 ;
-(void)airplaneModeChanged;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3 ;
-(double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2 ;
-(void)stackingViewControllerDidLayoutViewControllers:(id)arg1 ;
-(BOOL)showTitleBar;
-(void)setShowTitleBar:(BOOL)arg1 ;
-(BOOL)hideDirectionsButtons;
-(void)setHideDirectionsButtons:(BOOL)arg1 ;
-(BOOL)showEditButton;
-(void)setShowEditButton:(BOOL)arg1 ;
-(BOOL)hideInlineMap;
-(void)setHideInlineMap:(BOOL)arg1 ;
-(BOOL)showInlineMapInHeader;
-(void)setShowInlineMapInHeader:(BOOL)arg1 ;
-(BOOL)showNearbyApps;
-(void)setShowNearbyApps:(BOOL)arg1 ;
-(BOOL)showReportAProblem;
-(void)setShowReportAProblem:(BOOL)arg1 ;
-(BOOL)disableReportAProblem;
-(void)setDisableReportAProblem:(BOOL)arg1 ;
-(BOOL)showSimulateLocation;
-(void)setShowSimulateLocation:(BOOL)arg1 ;
-(BOOL)showOpenInSkyline;
-(void)setShowOpenInSkyline:(BOOL)arg1 ;
-(BOOL)showOpenInPinpoint;
-(void)setShowOpenInPinpoint:(BOOL)arg1 ;
-(BOOL)showShareActionsButton;
-(void)setShowShareActionsButton:(BOOL)arg1 ;
-(BOOL)allowTransitLineSelection;
-(void)setAllowTransitLineSelection:(BOOL)arg1 ;
-(BOOL)showFavoriteButtons;
-(void)setShowFavoriteButtons:(BOOL)arg1 ;
-(BOOL)useCompactPhotosView;
-(void)setUseCompactPhotosView:(BOOL)arg1 ;
-(id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_performWhenViewHasAppeared:(/*^block*/id)arg1 ;
-(BOOL)_showReportAProblem;
-(id)draggableContent;
-(id)draggableHeaderView;
-(void)_setDefaultViewControllers:(id)arg1 ;
-(BOOL)_hasContactAccess;
-(id)_contactForEditOperations;
-(id)_refetchedContactForCCTV:(id)arg1 error:(id*)arg2 ;
-(id)_removeMapsDataFromContact:(id)arg1 ;
-(BOOL)_contactStoredMatchingMapItem:(id)arg1 ;
-(BOOL)_shouldShowContactActions;
-(void)_updateViewControllers;
-(void)_createViewControllersForBrand:(id)arg1 ;
-(void)_createViewControllers:(id)arg1 ;
-(void)_createViewControllersForShortPlacecard:(id)arg1 ;
-(UIViewController*)_createViewControllerForModule:(id)arg1 ;
-(id)createFooterActions;
-(id)createRowActions;
-(id)createMessageViewController;
-(id)transitVC;
-(id)transitAttributionVC;
-(id)reservationVC;
-(BOOL)shouldDisplayVenueBrowseVC;
-(id)venueBrowseVC;
-(id)parentVenueVC;
-(id)venueInfoContentsVC;
-(id)parentVC;
-(id)officialAppsVC;
-(id)inlineMapVC;
-(id)poisInlineMapVC;
-(id)photoVC;
-(id)infosVC;
-(id)messagesHoursVC;
-(id)hoursVC;
-(id)serviceHoursVC;
-(id)businessInfosVC;
-(id)reviewsVC;
-(id)attributionsVC;
-(id)encyclopedicVC;
-(unsigned long long)annotatedItemListDisplayStyle;
-(id)annotatedItemListViewControllerWithDisplayStyle:(unsigned long long)arg1 ;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3 ;
-(void)setPlaceItem:(id)arg1 updateOriginalContact:(BOOL)arg2 ;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
-(void)setPlaceInBookmarks:(BOOL)arg1 ;
-(id)_createTableBookingButtonController;
-(BOOL)_shouldShowSiriReservationController;
-(BOOL)_canShowExtensionReservationButton;
-(_MKPlaceActionButtonController *)headerSecondaryButtonController;
-(void)setHeaderSecondaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)setHeaderTertiaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)_didResolveAttribution:(id)arg1 ;
-(void)setShowContactActions:(BOOL)arg1 ;
-(id)additionalViewControllersAtPosition:(long long)arg1 ;
-(id)_mapTableKeyForSectionPosition:(long long)arg1 ;
-(long long)_sectionPositionForMapTableKey:(id)arg1 ;
-(void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2 ;
-(void)removeAdditionalViewController:(id)arg1 ;
-(id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2 ;
-(BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2 ;
-(void)_showEditSheet:(id)arg1 ;
-(void)_checkDeviceLockStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_showShareSheet:(id)arg1 ;
-(void)_showShareSheetNoDeviceLockCheck:(id)arg1 ;
-(void)updateHeaderTitle;
-(id)_traits;
-(double)headerSecondaryNameLabelPadding;
-(void)_dismissModalViewController;
-(void)networkReachableChanged:(id)arg1 ;
-(void)updateAirplaneModeNetworkUnreachable;
-(void)setInAirplaneModeAndNetworkUnreachable:(BOOL)arg1 ;
-(void)_updateViewControllerStatesForOffline;
-(void)_launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 mapItem:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)getPlaceCardAGGDType;
-(int)getPlaceCardTypeForAnalytics;
-(id)generateAvailableActionForAnalytics;
-(id)generateUnactionableUIElementsForAnalytics;
-(void)placeCardWillCloseFromClientType:(unsigned long long)arg1 ;
-(_MKDistanceDetailProvider *)distanceMonitor;
-(void)setDistanceMonitor:(_MKDistanceDetailProvider *)arg1 ;
-(BOOL)hasCheckedDistanceAvailability;
-(void)setHasCheckedDistanceAvailability:(BOOL)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(CNContact *)originalContact;
-(void)setOriginalContact:(CNContact *)arg1 ;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(id<_MKPlaceViewControllerFeedbackDelegate>)placeViewFeedbackDelegate;
-(void)setPlaceViewFeedbackDelegate:(id<_MKPlaceViewControllerFeedbackDelegate>)arg1 ;
-(id)placeViewFeedbackAppLaunchHandler;
-(void)setPlaceViewFeedbackAppLaunchHandler:(id)arg1 ;
-(BOOL)placeInBookmarks;
-(BOOL)showContactActions;
-(CNContactNavigationController*<CNContactViewControllerPrivateDelegate>)contactsNavigationController;
-(void)setContactsNavigationController:(CNContactNavigationController*<CNContactViewControllerPrivateDelegate>)arg1 ;
-(BOOL)inAirplaneModeAndNetworkUnreachable;
-(RadiosPreferences *)radioPreferences;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(NSMutableArray *)viewDidAppearBlocks;
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(_MKPlaceActionButtonController *)headerTertiaryButtonController;
-(double)contentAlpha;
-(CNContact *)contact;
-(id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)options;
-(void)_commonInit;
-(void)setContentAlpha:(double)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)setOptions:(unsigned long long)arg1 ;
-(CLLocation *)location;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

