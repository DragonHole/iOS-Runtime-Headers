/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSString;

@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource> {

	RetainPtr<NSItemProvider>* _itemProvider;
	RetainPtr<ARQuickLookWebKitItem>* _item;
	URL* _originatingPageURL;
	URL* _downloadedURL;
	/*^block*/id _completionHandler;
	NSString* _mimeType;

}

@property (copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) NSString * mimeType;               //@synthesize mimeType=_mimeType - In the implementation block
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)finish:(URL*)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)initWithMIMEType:(id)arg1 originatingPageURL:(URL*)arg2 ;
@end
