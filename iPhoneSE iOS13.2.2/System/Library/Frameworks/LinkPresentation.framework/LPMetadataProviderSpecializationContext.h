/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, WKWebView;

@interface LPMetadataProviderSpecializationContext : NSObject {

	BOOL _hasLoadedResource;
	NSURL* _URL;
	NSString* _MIMEType;
	WKWebView* _webView;
	unsigned long long _allowedSpecializations;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * MIMEType;                               //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedResource;                                 //@synthesize hasLoadedResource=_hasLoadedResource - In the implementation block
@property (nonatomic,retain,readonly) WKWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedSpecializations;              //@synthesize allowedSpecializations=_allowedSpecializations - In the implementation block
-(NSURL *)URL;
-(NSString *)MIMEType;
-(WKWebView *)webView;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(BOOL)arg4 allowedSpecializations:(unsigned long long)arg5 ;
-(unsigned long long)allowedSpecializations;
-(BOOL)hasLoadedResource;
@end
