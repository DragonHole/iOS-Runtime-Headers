/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>
#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class SFSearchResult, NSString, NSURL, WBSParsecImageRepresentation, WBSQuerySuggestion;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem> {

	SFSearchResult* sfSearchResultValue;
	long long _parsecQueryID;
	NSString* _label;
	NSURL* _url;
	WBSParsecImageRepresentation* _imageRepresentation;

}

@property (nonatomic,copy,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) long long parsecQueryID;                                         //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)label;
-(WBSParsecImageRepresentation *)imageRepresentation;
-(long long)parsecQueryID;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
@end

