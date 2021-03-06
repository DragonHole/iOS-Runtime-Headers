/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSString, PSUIAppDescription, NSURL;

@interface PSUIAppInstallController : NSObject {

	NSURLSession* _session;
	int _installState;
	NSString* _appID;
	NSString* _bundleID;
	PSUIAppDescription* _appDescription;
	NSURL* _installURL;
	NSURL* _moreAppsURL;

}

@property (retain) PSUIAppDescription * appDescription;              //@synthesize appDescription=_appDescription - In the implementation block
@property (retain) NSURL * installURL;                               //@synthesize installURL=_installURL - In the implementation block
@property (nonatomic,retain) NSURL * moreAppsURL;                    //@synthesize moreAppsURL=_moreAppsURL - In the implementation block
@property (nonatomic,readonly) NSString * appID;                     //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) int installState;                               //@synthesize installState=_installState - In the implementation block
+(id)lookupAppDescriptionForInstalledApp:(id)arg1 ;
+(id)loadIconFromURL:(id)arg1 session:(id)arg2 ;
+(void)saveAppDescriptionToCache:(id)arg1 ;
+(void)lookupAppFromStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)tryLoadAppDescriptionFromCache;
+(id)iconLocalCacheURLFromKey:(id)arg1 ;
-(NSURL *)installURL;
-(id)specifier;
-(NSString *)appID;
-(int)installState;
-(id)initWithAppID:(id)arg1 carrierMoreAppsURL:(id)arg2 ;
-(BOOL)moreAppsAvailable;
-(void)moreAppsButtonTapped:(id)arg1 ;
-(void)setInstallURL:(NSURL *)arg1 ;
-(void)installButtonTapped:(id)arg1 ;
-(PSUIAppDescription *)appDescription;
-(void)setAppDescription:(PSUIAppDescription *)arg1 ;
-(NSURL *)moreAppsURL;
-(void)setMoreAppsURL:(NSURL *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)load;
-(NSString *)bundleID;
@end

