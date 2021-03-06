/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationProxy, PSUsageBundleApp, NSArray, NSString, NSDate;

@interface PSStorageApp : NSObject {

	long long _purgeableSize;
	BOOL _isUserApp;
	BOOL _isSystemApp;
	BOOL _isInternalApp;
	BOOL _isUsageApp;
	BOOL _isDocumentApp;
	BOOL _isDeleting;
	BOOL _isDemoting;
	BOOL _isPseudoApp;
	LSApplicationProxy* _appProxy;
	long long _demoteSize;
	PSUsageBundleApp* _usageBundleApp;
	NSArray* _mediaTypes;
	long long _externalDataSize;
	long long _sharedDataSize;
	long long _specialSize;

}

@property (assign,nonatomic) BOOL isUserApp;                             //@synthesize isUserApp=_isUserApp - In the implementation block
@property (assign,nonatomic) BOOL isUsageApp;                            //@synthesize isUsageApp=_isUsageApp - In the implementation block
@property (assign) BOOL isPseudoApp;                                     //@synthesize isPseudoApp=_isPseudoApp - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * appProxy;              //@synthesize appProxy=_appProxy - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,readonly) NSArray * documents; 
@property (nonatomic,readonly) long long purgeableSize; 
@property (nonatomic,readonly) long long staticSize; 
@property (nonatomic,readonly) long long dynamicSize; 
@property (nonatomic,readonly) long long demoteSize;                     //@synthesize demoteSize=_demoteSize - In the implementation block
@property (nonatomic,readonly) long long dataSize; 
@property (nonatomic,readonly) long long totalSize; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isInternalApp; 
@property (nonatomic,readonly) BOOL isDocumentApp; 
@property (nonatomic,readonly) BOOL isDeletable; 
@property (nonatomic,readonly) BOOL isDemotable; 
@property (nonatomic,readonly) BOOL isDemoted; 
@property (nonatomic,readonly) BOOL isDeleted; 
@property (nonatomic,readonly) NSDate * lastUsedDate; 
@property (nonatomic,readonly) NSDate * installDate; 
@property (retain) PSUsageBundleApp * usageBundleApp;                    //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSArray * mediaTypes;                       //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign) long long externalDataSize;                           //@synthesize externalDataSize=_externalDataSize - In the implementation block
@property (assign) long long sharedDataSize;                             //@synthesize sharedDataSize=_sharedDataSize - In the implementation block
@property (assign) long long specialSize;                                //@synthesize specialSize=_specialSize - In the implementation block
+(void)setLaunchDatesNeedUpdating;
-(NSString *)bundleVersion;
-(NSString *)appIdentifier;
-(BOOL)isDeletable;
-(id)initWithApplicationProxy:(id)arg1 ;
-(BOOL)isPseudoApp;
-(BOOL)isDemoted;
-(void)setAppProxy:(LSApplicationProxy *)arg1 ;
-(BOOL)valueForBooleanInfoKey:(id)arg1 ;
-(long long)dynamicSize;
-(long long)specialSize;
-(PSUsageBundleApp *)usageBundleApp;
-(long long)externalDataSize;
-(long long)sharedDataSize;
-(long long)staticSize;
-(long long)dataSize;
-(void)reloadProxy;
-(BOOL)isUserApp;
-(BOOL)isSystemApp;
-(BOOL)isInternalApp;
-(BOOL)isUsageApp;
-(BOOL)isDemotable;
-(BOOL)isDocumentApp;
-(long long)demoteSize;
-(void)setUsageBundleApp:(PSUsageBundleApp *)arg1 ;
-(void)setExternalDataSize:(long long)arg1 ;
-(void)setSharedDataSize:(long long)arg1 ;
-(void)setSpecialSize:(long long)arg1 ;
-(void)setIsPseudoApp:(BOOL)arg1 ;
-(void)setIsUserApp:(BOOL)arg1 ;
-(void)setIsUsageApp:(BOOL)arg1 ;
-(NSDate *)lastUsedDate;
-(BOOL)isDeleted;
-(NSDate *)installDate;
-(long long)totalSize;
-(NSArray *)documents;
-(LSApplicationProxy *)appProxy;
-(NSString *)vendorName;
-(long long)purgeableSize;
-(NSString *)versionString;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(NSArray *)mediaTypes;
-(void)setMediaTypes:(NSArray *)arg1 ;
@end

