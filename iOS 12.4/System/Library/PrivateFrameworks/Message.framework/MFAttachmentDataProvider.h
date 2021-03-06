/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface MFAttachmentDataProvider : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)dataProviderWithURL:(id)arg1 ;
+(id)dataProviderWithPath:(id)arg1 ;
-(id)_path;
-(BOOL)_isFileURL;
-(id)_fileAttributes:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 code:(long long)arg2 ;
-(BOOL)exists;
-(void)dealloc;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)save:(id)arg1 ;
-(id)data;
@end

