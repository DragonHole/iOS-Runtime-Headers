/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying> {

	RetainPtr<NSURL>* _linkURL;

}

@property (nonatomic,readonly) NSURL * linkURL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)linkURL;
-(id)_initWithLinkURL:(id)arg1 ;
@end

