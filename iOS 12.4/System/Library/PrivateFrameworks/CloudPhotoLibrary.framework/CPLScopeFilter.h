/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CPLScopeFilter : NSObject {

	NSSet* _includedScopeIdentifiers;
	NSSet* _excludedScopeIdentifiers;

}

@property (nonatomic,readonly) NSSet * includedScopeIdentifiers;              //@synthesize includedScopeIdentifiers=_includedScopeIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * excludedScopeIdentifiers;              //@synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers - In the implementation block
-(BOOL)filterOnScopeIdentifier:(id)arg1 ;
-(id)_setOfScopeIdentifiersFromEnumeration:(id)arg1 ;
-(id)initWithIncludedScopeIdentifiers:(id)arg1 ;
-(id)initWithExcludedScopeIdentifiers:(id)arg1 ;
-(NSSet *)includedScopeIdentifiers;
-(NSSet *)excludedScopeIdentifiers;
-(id)description;
@end

