/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface SXQuickLookFile : NSObject {

	NSURL* _fileURL;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * fileURL;               //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithFileURL:(id)arg1 title:(id)arg2 ;
-(NSString *)title;
-(id)previewItemURL;
-(id)previewItemTitle;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end
