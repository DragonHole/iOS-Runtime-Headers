/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCIssueBookmark : NSObject <NSCopying> {

	long long _issueType;
	NSString* _pageID;
	NSString* _articleID;

}

@property (nonatomic,readonly) long long issueType;                    //@synthesize issueType=_issueType - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                 //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
+(id)ANFBookmarkWithArticleID:(id)arg1 ;
+(id)PDFBookmarkWithPageID:(id)arg1 ;
-(long long)issueType;
-(NSString *)articleID;
-(NSString *)pageID;
-(id)initWithIssueType:(long long)arg1 articleID:(id)arg2 pageID:(id)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
