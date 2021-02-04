/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, FPSandboxingURLWrapper, NSData;

@interface QLThumbnailItem : NSObject <NSSecureCoding> {

	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	NSURL* _url;
	FPSandboxingURLWrapper* _urlWrapperForExtension;
	NSData* _data;
	NSString* _contentType;
	unsigned long long _downloadStatus;
	NSString* _dataContentType;
	NSString* _computedContentType;

}

@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) NSString * contentType; 
@property (readonly) NSURL * url;                                                  //@synthesize url=_url - In the implementation block
@property (readonly) FPSandboxingURLWrapper * urlWrapperForExtension;              //@synthesize urlWrapperForExtension=_urlWrapperForExtension - In the implementation block
@property (readonly) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * dataContentType;                         //@synthesize dataContentType=_dataContentType - In the implementation block
@property (assign) unsigned long long downloadStatus;                              //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (copy) NSString * computedContentType;                                   //@synthesize computedContentType=_computedContentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)itemType;
-(NSString *)contentType;
-(unsigned long long)downloadStatus;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)_issueFileExtensionForURL:(id)arg1 ;
-(void)issueFileExtension;
-(FPSandboxingURLWrapper *)urlWrapperForExtension;
-(void)consumeFileExtension;
-(NSString *)computedContentType;
-(void)setComputedContentType:(NSString *)arg1 ;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 ;
-(NSString *)dataContentType;
-(BOOL)needsDownload;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(NSData *)data;
@end
