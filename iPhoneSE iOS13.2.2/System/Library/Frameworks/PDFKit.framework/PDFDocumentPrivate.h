/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PDFDocumentPageChangeDelegate, PDFAKControllerDelegateProtocol, PDFDocumentAsyncFindDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class NSURL, NSMutableArray, NSMutableDictionary, NSString, NSDictionary, PDFOutline, NSObject, NSArray, PDFSelection, PDFForm, NSIndexSet, NSMutableIndexSet, PDFAKDocumentAdaptor, PDFRenderingProperties;

@interface PDFDocumentPrivate : NSObject {

	CGPDFDocumentRef document;
	NSURL* documentURL;
	NSMutableArray* pages;
	NSMutableDictionary* pageIndices;
	NSMutableDictionary* pageDictionaryIndices;
	BOOL subclassOverridesPageAtIndex;
	id delegate;
	BOOL respondsToDidUnlock;
	BOOL respondsToDidFindMatch;
	BOOL respondsToDidBeginDocumentFind;
	BOOL respondsToDidEndDocumentFind;
	BOOL respondsToDidBeginPageFind;
	BOOL respondsToDidEndPageFind;
	BOOL respondsToDidMatchString;
	BOOL respondsToPrintJobTitle;
	BOOL respondsToClassForPage;
	BOOL respondsToClassForAnnotationType;
	BOOL respondsToClassForAnnotationClass;
	unsigned long long pageCount;
	int majorVersion;
	int minorVersion;
	BOOL isEncrypted;
	BOOL isUnlocked;
	int accessPermissions;
	BOOL allowsPrinting;
	BOOL allowsCopying;
	BOOL allowsDocumentChanges;
	BOOL allowsDocumentAssembly;
	BOOL allowsContentAccessibility;
	BOOL allowsCommenting;
	BOOL allowsFormFieldEntry;
	long long permission;
	NSString* ownerPassword;
	NSString* userPassword;
	NSDictionary* attributes;
	PDFOutline* outline;
	NSObject*<OS_dispatch_queue> textExtractionQueue;
	BOOL finding;
	int findModel;
	NSArray* findStrings;
	PDFSelection* findInstance;
	unsigned long long findOptions;
	long long findPageIndex;
	long long findCharIndex;
	long long lastFindPageIndex;
	long long lastFindCharIndex;
	NSMutableArray* findResults;
	PDFForm* formData;
	BOOL formDataLoaded;
	NSArray* documentCatalogMetadata;
	NSString* xmpNameSpace;
	NSString* xmpPrefix;
	NSString* xmpRootPath;
	id<PDFDocumentPageChangeDelegate> pageChangeDelegate;
	BOOL documentChanged;
	BOOL documentHasBurnInAnnotations;
	BOOL pagesChanged;
	NSIndexSet* initialBookmarkedPageIndices;
	NSMutableIndexSet* bookmarkedPages;
	PDFAKDocumentAdaptor* akDocumentAdaptor;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegateForDeferredSetup;
	PDFRenderingProperties* renderingProperties;
	BOOL useTaggedPDF;
	BOOL limitedSearch;
	NSObject*<OS_dispatch_queue> asyncSearchQueue;
	os_unfair_lock_s asyncSearchLock;
	id<PDFDocumentAsyncFindDelegate> asyncSearchDelegate;
	NSMutableArray* asyncSearchResults;

}
@end
