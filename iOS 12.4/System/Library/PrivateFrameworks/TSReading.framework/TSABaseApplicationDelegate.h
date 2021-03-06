/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKApplicationDelegate.h>

@protocol TSADownloadDelegate;
@class TSADocumentRoot, NSString, NSArray;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate {

	TSADocumentRoot* mDocumentRoot;
	id<TSADownloadDelegate> _downloadDelegate;

}

@property (assign,nonatomic) TSADocumentRoot * documentRoot; 
@property (nonatomic,readonly) NSString * nativeDocumentType; 
@property (nonatomic,readonly) NSString * nativeDocumentExtension; 
@property (nonatomic,readonly) NSString * templateDocumentType; 
@property (nonatomic,readonly) NSString * templateSFFDocumentType; 
@property (nonatomic,readonly) NSString * templateDocumentExtension; 
@property (nonatomic,readonly) NSString * tangierEditingFormatDocumentType; 
@property (nonatomic,readonly) NSString * nativeSFFDocumentType; 
@property (nonatomic,readonly) NSArray * readableDocumentTypes; 
@property (nonatomic,readonly) NSArray * importableDocumentTypes; 
@property (nonatomic,readonly) NSArray * applicationTemplateVariants; 
@property (nonatomic,retain) id<TSADownloadDelegate> downloadDelegate;                   //@synthesize downloadDelegate=_downloadDelegate - In the implementation block
+(void)resetSharedConfigurations;
+(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 ;
+(id)sharedDelegate;
-(id)invalidURLSchemes;
-(id)validURLSchemes;
-(TSADocumentRoot *)documentRoot;
-(void)setDocumentRoot:(TSADocumentRoot *)arg1 ;
-(void)persistenceError:(id)arg1 ;
-(void)registerDefaults;
-(void)setDownloadDelegate:(id<TSADownloadDelegate>)arg1 ;
-(NSString *)nativeDocumentType;
-(NSString *)templateDocumentType;
-(NSString *)templateSFFDocumentType;
-(NSString *)tangierEditingFormatDocumentType;
-(NSString *)nativeSFFDocumentType;
-(NSArray *)importableDocumentTypes;
-(NSArray *)readableDocumentTypes;
-(id)applicationTemplateVariantsForLocale:(CFLocaleRef)arg1 ;
-(Class)documentRootClass;
-(NSString *)nativeDocumentExtension;
-(NSString *)templateDocumentExtension;
-(BOOL)isReadableDocumentType:(id)arg1 ;
-(NSArray *)applicationTemplateVariants;
-(double)mimimumAspectRatioForPreviewImage;
-(double)maximumAspectRatioForPreviewImage;
-(BOOL)URLIsValidForImportedHyperlink:(id)arg1 ;
-(id)existingNestedDocumentPathForPath:(id)arg1 ;
-(id<TSADownloadDelegate>)downloadDelegate;
-(id)init;
-(void)dealloc;
-(BOOL)openURL:(id)arg1 ;
@end

