/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDelayedValidator, IDEOpenQuicklySearchContext, NSArray;

@interface IDEOpenQuicklyQuery : NSObject
{
    NSArray *_matchProviders;
    NSArray *_observationTokens;
    IDEOpenQuicklySearchContext *_context;
    id <DVTObservingToken> _trimmedInputObservingToken;
    NSArray *_matches;
    NSArray *_providerClasses;
    DVTDelayedValidator *_matchValidator;
    id <IDEOpenQuicklyQueryDelegate> _delegate;
    BOOL _ignoreUpdates;
    BOOL _idle;
}

+ (id)scopedProviderClasses;
+ (id)unscopedProviderClasses;
- (BOOL)_allMatchProvidersAreIdle;
@property IDEOpenQuicklySearchContext *context; // @synthesize context=_context;
@property id <IDEOpenQuicklyQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithProviderClasses:(id)arg1;
- (void)invokeBlockWithScoredMatches:(id)arg1;
@property(getter=isIdle) BOOL idle; // @synthesize idle=_idle;
@property(copy) NSArray *matches; // @synthesize matches=_matches;
- (id)sortedTopMatches:(long long)arg1;
- (long long)totalNumberOfMatches;
- (void)validateMatches:(id)arg1;
- (void)validateMatchesImmediately;

@end
