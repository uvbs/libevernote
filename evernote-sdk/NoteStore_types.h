/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef NoteStore_TYPES_H
#define NoteStore_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>

#include "UserStore_types.h"
#include "Types_types.h"
#include "Errors_types.h"
#include "Limits_types.h"


namespace evernote { namespace edam {

typedef struct _SyncState__isset {
  _SyncState__isset() : uploaded(false) {}
  bool uploaded;
} _SyncState__isset;

class SyncState {
 public:

  static const char* ascii_fingerprint; // = "2D37F7155AE775C329078C137087C461";
  static const uint8_t binary_fingerprint[16]; // = {0x2D,0x37,0xF7,0x15,0x5A,0xE7,0x75,0xC3,0x29,0x07,0x8C,0x13,0x70,0x87,0xC4,0x61};

  SyncState() : currentTime(0), fullSyncBefore(0), updateCount(0), uploaded(0) {
  }

  virtual ~SyncState() throw() {}

  evernote::edam::Timestamp currentTime;
  evernote::edam::Timestamp fullSyncBefore;
  int32_t updateCount;
  int64_t uploaded;

  _SyncState__isset __isset;

  bool operator == (const SyncState & rhs) const
  {
    if (!(currentTime == rhs.currentTime))
      return false;
    if (!(fullSyncBefore == rhs.fullSyncBefore))
      return false;
    if (!(updateCount == rhs.updateCount))
      return false;
    if (__isset.uploaded != rhs.__isset.uploaded)
      return false;
    else if (__isset.uploaded && !(uploaded == rhs.uploaded))
      return false;
    return true;
  }
  bool operator != (const SyncState &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SyncState & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SyncChunk__isset {
  _SyncChunk__isset() : chunkHighUSN(false), notes(false), notebooks(false), tags(false), searches(false), resources(false), expungedNotes(false), expungedNotebooks(false), expungedTags(false), expungedSearches(false), linkedNotebooks(false), expungedLinkedNotebooks(false) {}
  bool chunkHighUSN;
  bool notes;
  bool notebooks;
  bool tags;
  bool searches;
  bool resources;
  bool expungedNotes;
  bool expungedNotebooks;
  bool expungedTags;
  bool expungedSearches;
  bool linkedNotebooks;
  bool expungedLinkedNotebooks;
} _SyncChunk__isset;

class SyncChunk {
 public:

  static const char* ascii_fingerprint; // = "E54B7D76D1F538784AA75357CB8A1AD4";
  static const uint8_t binary_fingerprint[16]; // = {0xE5,0x4B,0x7D,0x76,0xD1,0xF5,0x38,0x78,0x4A,0xA7,0x53,0x57,0xCB,0x8A,0x1A,0xD4};

  SyncChunk() : currentTime(0), chunkHighUSN(0), updateCount(0) {
  }

  virtual ~SyncChunk() throw() {}

  evernote::edam::Timestamp currentTime;
  int32_t chunkHighUSN;
  int32_t updateCount;
  std::vector<evernote::edam::Note>  notes;
  std::vector<evernote::edam::Notebook>  notebooks;
  std::vector<evernote::edam::Tag>  tags;
  std::vector<evernote::edam::SavedSearch>  searches;
  std::vector<evernote::edam::Resource>  resources;
  std::vector<evernote::edam::Guid>  expungedNotes;
  std::vector<evernote::edam::Guid>  expungedNotebooks;
  std::vector<evernote::edam::Guid>  expungedTags;
  std::vector<evernote::edam::Guid>  expungedSearches;
  std::vector<evernote::edam::LinkedNotebook>  linkedNotebooks;
  std::vector<evernote::edam::Guid>  expungedLinkedNotebooks;

  _SyncChunk__isset __isset;

  bool operator == (const SyncChunk & rhs) const
  {
    if (!(currentTime == rhs.currentTime))
      return false;
    if (__isset.chunkHighUSN != rhs.__isset.chunkHighUSN)
      return false;
    else if (__isset.chunkHighUSN && !(chunkHighUSN == rhs.chunkHighUSN))
      return false;
    if (!(updateCount == rhs.updateCount))
      return false;
    if (__isset.notes != rhs.__isset.notes)
      return false;
    else if (__isset.notes && !(notes == rhs.notes))
      return false;
    if (__isset.notebooks != rhs.__isset.notebooks)
      return false;
    else if (__isset.notebooks && !(notebooks == rhs.notebooks))
      return false;
    if (__isset.tags != rhs.__isset.tags)
      return false;
    else if (__isset.tags && !(tags == rhs.tags))
      return false;
    if (__isset.searches != rhs.__isset.searches)
      return false;
    else if (__isset.searches && !(searches == rhs.searches))
      return false;
    if (__isset.resources != rhs.__isset.resources)
      return false;
    else if (__isset.resources && !(resources == rhs.resources))
      return false;
    if (__isset.expungedNotes != rhs.__isset.expungedNotes)
      return false;
    else if (__isset.expungedNotes && !(expungedNotes == rhs.expungedNotes))
      return false;
    if (__isset.expungedNotebooks != rhs.__isset.expungedNotebooks)
      return false;
    else if (__isset.expungedNotebooks && !(expungedNotebooks == rhs.expungedNotebooks))
      return false;
    if (__isset.expungedTags != rhs.__isset.expungedTags)
      return false;
    else if (__isset.expungedTags && !(expungedTags == rhs.expungedTags))
      return false;
    if (__isset.expungedSearches != rhs.__isset.expungedSearches)
      return false;
    else if (__isset.expungedSearches && !(expungedSearches == rhs.expungedSearches))
      return false;
    if (__isset.linkedNotebooks != rhs.__isset.linkedNotebooks)
      return false;
    else if (__isset.linkedNotebooks && !(linkedNotebooks == rhs.linkedNotebooks))
      return false;
    if (__isset.expungedLinkedNotebooks != rhs.__isset.expungedLinkedNotebooks)
      return false;
    else if (__isset.expungedLinkedNotebooks && !(expungedLinkedNotebooks == rhs.expungedLinkedNotebooks))
      return false;
    return true;
  }
  bool operator != (const SyncChunk &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SyncChunk & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SyncChunkFilter__isset {
  _SyncChunkFilter__isset() : includeNotes(false), includeNoteResources(false), includeNoteAttributes(false), includeNotebooks(false), includeTags(false), includeSearches(false), includeResources(false), includeLinkedNotebooks(false), includeExpunged(false), includeNoteApplicationDataFullMap(false), includeResourceApplicationDataFullMap(false), includeNoteResourceApplicationDataFullMap(false), requireNoteContentClass(false) {}
  bool includeNotes;
  bool includeNoteResources;
  bool includeNoteAttributes;
  bool includeNotebooks;
  bool includeTags;
  bool includeSearches;
  bool includeResources;
  bool includeLinkedNotebooks;
  bool includeExpunged;
  bool includeNoteApplicationDataFullMap;
  bool includeResourceApplicationDataFullMap;
  bool includeNoteResourceApplicationDataFullMap;
  bool requireNoteContentClass;
} _SyncChunkFilter__isset;

class SyncChunkFilter {
 public:

  static const char* ascii_fingerprint; // = "39A6499DBC9F34F8EB10F87E45BE5390";
  static const uint8_t binary_fingerprint[16]; // = {0x39,0xA6,0x49,0x9D,0xBC,0x9F,0x34,0xF8,0xEB,0x10,0xF8,0x7E,0x45,0xBE,0x53,0x90};

  SyncChunkFilter() : includeNotes(0), includeNoteResources(0), includeNoteAttributes(0), includeNotebooks(0), includeTags(0), includeSearches(0), includeResources(0), includeLinkedNotebooks(0), includeExpunged(0), includeNoteApplicationDataFullMap(0), includeResourceApplicationDataFullMap(0), includeNoteResourceApplicationDataFullMap(0), requireNoteContentClass("") {
  }

  virtual ~SyncChunkFilter() throw() {}

  bool includeNotes;
  bool includeNoteResources;
  bool includeNoteAttributes;
  bool includeNotebooks;
  bool includeTags;
  bool includeSearches;
  bool includeResources;
  bool includeLinkedNotebooks;
  bool includeExpunged;
  bool includeNoteApplicationDataFullMap;
  bool includeResourceApplicationDataFullMap;
  bool includeNoteResourceApplicationDataFullMap;
  std::string requireNoteContentClass;

  _SyncChunkFilter__isset __isset;

  bool operator == (const SyncChunkFilter & rhs) const
  {
    if (__isset.includeNotes != rhs.__isset.includeNotes)
      return false;
    else if (__isset.includeNotes && !(includeNotes == rhs.includeNotes))
      return false;
    if (__isset.includeNoteResources != rhs.__isset.includeNoteResources)
      return false;
    else if (__isset.includeNoteResources && !(includeNoteResources == rhs.includeNoteResources))
      return false;
    if (__isset.includeNoteAttributes != rhs.__isset.includeNoteAttributes)
      return false;
    else if (__isset.includeNoteAttributes && !(includeNoteAttributes == rhs.includeNoteAttributes))
      return false;
    if (__isset.includeNotebooks != rhs.__isset.includeNotebooks)
      return false;
    else if (__isset.includeNotebooks && !(includeNotebooks == rhs.includeNotebooks))
      return false;
    if (__isset.includeTags != rhs.__isset.includeTags)
      return false;
    else if (__isset.includeTags && !(includeTags == rhs.includeTags))
      return false;
    if (__isset.includeSearches != rhs.__isset.includeSearches)
      return false;
    else if (__isset.includeSearches && !(includeSearches == rhs.includeSearches))
      return false;
    if (__isset.includeResources != rhs.__isset.includeResources)
      return false;
    else if (__isset.includeResources && !(includeResources == rhs.includeResources))
      return false;
    if (__isset.includeLinkedNotebooks != rhs.__isset.includeLinkedNotebooks)
      return false;
    else if (__isset.includeLinkedNotebooks && !(includeLinkedNotebooks == rhs.includeLinkedNotebooks))
      return false;
    if (__isset.includeExpunged != rhs.__isset.includeExpunged)
      return false;
    else if (__isset.includeExpunged && !(includeExpunged == rhs.includeExpunged))
      return false;
    if (__isset.includeNoteApplicationDataFullMap != rhs.__isset.includeNoteApplicationDataFullMap)
      return false;
    else if (__isset.includeNoteApplicationDataFullMap && !(includeNoteApplicationDataFullMap == rhs.includeNoteApplicationDataFullMap))
      return false;
    if (__isset.includeResourceApplicationDataFullMap != rhs.__isset.includeResourceApplicationDataFullMap)
      return false;
    else if (__isset.includeResourceApplicationDataFullMap && !(includeResourceApplicationDataFullMap == rhs.includeResourceApplicationDataFullMap))
      return false;
    if (__isset.includeNoteResourceApplicationDataFullMap != rhs.__isset.includeNoteResourceApplicationDataFullMap)
      return false;
    else if (__isset.includeNoteResourceApplicationDataFullMap && !(includeNoteResourceApplicationDataFullMap == rhs.includeNoteResourceApplicationDataFullMap))
      return false;
    if (__isset.requireNoteContentClass != rhs.__isset.requireNoteContentClass)
      return false;
    else if (__isset.requireNoteContentClass && !(requireNoteContentClass == rhs.requireNoteContentClass))
      return false;
    return true;
  }
  bool operator != (const SyncChunkFilter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SyncChunkFilter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteFilter__isset {
  _NoteFilter__isset() : order(false), ascending(false), words(false), notebookGuid(false), tagGuids(false), timeZone(false), inactive(false), emphasized(false) {}
  bool order;
  bool ascending;
  bool words;
  bool notebookGuid;
  bool tagGuids;
  bool timeZone;
  bool inactive;
  bool emphasized;
} _NoteFilter__isset;

class NoteFilter {
 public:

  static const char* ascii_fingerprint; // = "93B29CDDEFE43048C2B95A27B35D2189";
  static const uint8_t binary_fingerprint[16]; // = {0x93,0xB2,0x9C,0xDD,0xEF,0xE4,0x30,0x48,0xC2,0xB9,0x5A,0x27,0xB3,0x5D,0x21,0x89};

  NoteFilter() : order(0), ascending(0), words(""), notebookGuid(""), timeZone(""), inactive(0), emphasized("") {
  }

  virtual ~NoteFilter() throw() {}

  int32_t order;
  bool ascending;
  std::string words;
  evernote::edam::Guid notebookGuid;
  std::vector<evernote::edam::Guid>  tagGuids;
  std::string timeZone;
  bool inactive;
  std::string emphasized;

  _NoteFilter__isset __isset;

  bool operator == (const NoteFilter & rhs) const
  {
    if (__isset.order != rhs.__isset.order)
      return false;
    else if (__isset.order && !(order == rhs.order))
      return false;
    if (__isset.ascending != rhs.__isset.ascending)
      return false;
    else if (__isset.ascending && !(ascending == rhs.ascending))
      return false;
    if (__isset.words != rhs.__isset.words)
      return false;
    else if (__isset.words && !(words == rhs.words))
      return false;
    if (__isset.notebookGuid != rhs.__isset.notebookGuid)
      return false;
    else if (__isset.notebookGuid && !(notebookGuid == rhs.notebookGuid))
      return false;
    if (__isset.tagGuids != rhs.__isset.tagGuids)
      return false;
    else if (__isset.tagGuids && !(tagGuids == rhs.tagGuids))
      return false;
    if (__isset.timeZone != rhs.__isset.timeZone)
      return false;
    else if (__isset.timeZone && !(timeZone == rhs.timeZone))
      return false;
    if (__isset.inactive != rhs.__isset.inactive)
      return false;
    else if (__isset.inactive && !(inactive == rhs.inactive))
      return false;
    if (__isset.emphasized != rhs.__isset.emphasized)
      return false;
    else if (__isset.emphasized && !(emphasized == rhs.emphasized))
      return false;
    return true;
  }
  bool operator != (const NoteFilter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteFilter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteList__isset {
  _NoteList__isset() : stoppedWords(false), searchedWords(false), updateCount(false) {}
  bool stoppedWords;
  bool searchedWords;
  bool updateCount;
} _NoteList__isset;

class NoteList {
 public:

  static const char* ascii_fingerprint; // = "E0C7ABF656FCFFAB11668ADB39047D9B";
  static const uint8_t binary_fingerprint[16]; // = {0xE0,0xC7,0xAB,0xF6,0x56,0xFC,0xFF,0xAB,0x11,0x66,0x8A,0xDB,0x39,0x04,0x7D,0x9B};

  NoteList() : startIndex(0), totalNotes(0), updateCount(0) {
  }

  virtual ~NoteList() throw() {}

  int32_t startIndex;
  int32_t totalNotes;
  std::vector<evernote::edam::Note>  notes;
  std::vector<std::string>  stoppedWords;
  std::vector<std::string>  searchedWords;
  int32_t updateCount;

  _NoteList__isset __isset;

  bool operator == (const NoteList & rhs) const
  {
    if (!(startIndex == rhs.startIndex))
      return false;
    if (!(totalNotes == rhs.totalNotes))
      return false;
    if (!(notes == rhs.notes))
      return false;
    if (__isset.stoppedWords != rhs.__isset.stoppedWords)
      return false;
    else if (__isset.stoppedWords && !(stoppedWords == rhs.stoppedWords))
      return false;
    if (__isset.searchedWords != rhs.__isset.searchedWords)
      return false;
    else if (__isset.searchedWords && !(searchedWords == rhs.searchedWords))
      return false;
    if (__isset.updateCount != rhs.__isset.updateCount)
      return false;
    else if (__isset.updateCount && !(updateCount == rhs.updateCount))
      return false;
    return true;
  }
  bool operator != (const NoteList &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteList & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteMetadata__isset {
  _NoteMetadata__isset() : title(false), contentLength(false), created(false), updated(false), deleted(false), updateSequenceNum(false), notebookGuid(false), tagGuids(false), attributes(false), largestResourceMime(false), largestResourceSize(false) {}
  bool title;
  bool contentLength;
  bool created;
  bool updated;
  bool deleted;
  bool updateSequenceNum;
  bool notebookGuid;
  bool tagGuids;
  bool attributes;
  bool largestResourceMime;
  bool largestResourceSize;
} _NoteMetadata__isset;

class NoteMetadata {
 public:

  static const char* ascii_fingerprint; // = "2F280A04E4BFDA1C51231C465C49126D";
  static const uint8_t binary_fingerprint[16]; // = {0x2F,0x28,0x0A,0x04,0xE4,0xBF,0xDA,0x1C,0x51,0x23,0x1C,0x46,0x5C,0x49,0x12,0x6D};

  NoteMetadata() : guid(""), title(""), contentLength(0), created(0), updated(0), deleted(0), updateSequenceNum(0), notebookGuid(""), largestResourceMime(""), largestResourceSize(0) {
  }

  virtual ~NoteMetadata() throw() {}

  evernote::edam::Guid guid;
  std::string title;
  int32_t contentLength;
  evernote::edam::Timestamp created;
  evernote::edam::Timestamp updated;
  evernote::edam::Timestamp deleted;
  int32_t updateSequenceNum;
  std::string notebookGuid;
  std::vector<evernote::edam::Guid>  tagGuids;
  evernote::edam::NoteAttributes attributes;
  std::string largestResourceMime;
  int32_t largestResourceSize;

  _NoteMetadata__isset __isset;

  bool operator == (const NoteMetadata & rhs) const
  {
    if (!(guid == rhs.guid))
      return false;
    if (__isset.title != rhs.__isset.title)
      return false;
    else if (__isset.title && !(title == rhs.title))
      return false;
    if (__isset.contentLength != rhs.__isset.contentLength)
      return false;
    else if (__isset.contentLength && !(contentLength == rhs.contentLength))
      return false;
    if (__isset.created != rhs.__isset.created)
      return false;
    else if (__isset.created && !(created == rhs.created))
      return false;
    if (__isset.updated != rhs.__isset.updated)
      return false;
    else if (__isset.updated && !(updated == rhs.updated))
      return false;
    if (__isset.deleted != rhs.__isset.deleted)
      return false;
    else if (__isset.deleted && !(deleted == rhs.deleted))
      return false;
    if (__isset.updateSequenceNum != rhs.__isset.updateSequenceNum)
      return false;
    else if (__isset.updateSequenceNum && !(updateSequenceNum == rhs.updateSequenceNum))
      return false;
    if (__isset.notebookGuid != rhs.__isset.notebookGuid)
      return false;
    else if (__isset.notebookGuid && !(notebookGuid == rhs.notebookGuid))
      return false;
    if (__isset.tagGuids != rhs.__isset.tagGuids)
      return false;
    else if (__isset.tagGuids && !(tagGuids == rhs.tagGuids))
      return false;
    if (__isset.attributes != rhs.__isset.attributes)
      return false;
    else if (__isset.attributes && !(attributes == rhs.attributes))
      return false;
    if (__isset.largestResourceMime != rhs.__isset.largestResourceMime)
      return false;
    else if (__isset.largestResourceMime && !(largestResourceMime == rhs.largestResourceMime))
      return false;
    if (__isset.largestResourceSize != rhs.__isset.largestResourceSize)
      return false;
    else if (__isset.largestResourceSize && !(largestResourceSize == rhs.largestResourceSize))
      return false;
    return true;
  }
  bool operator != (const NoteMetadata &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteMetadata & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotesMetadataList__isset {
  _NotesMetadataList__isset() : stoppedWords(false), searchedWords(false), updateCount(false) {}
  bool stoppedWords;
  bool searchedWords;
  bool updateCount;
} _NotesMetadataList__isset;

class NotesMetadataList {
 public:

  static const char* ascii_fingerprint; // = "6D6571833726D08358868A3067A3239C";
  static const uint8_t binary_fingerprint[16]; // = {0x6D,0x65,0x71,0x83,0x37,0x26,0xD0,0x83,0x58,0x86,0x8A,0x30,0x67,0xA3,0x23,0x9C};

  NotesMetadataList() : startIndex(0), totalNotes(0), updateCount(0) {
  }

  virtual ~NotesMetadataList() throw() {}

  int32_t startIndex;
  int32_t totalNotes;
  std::vector<NoteMetadata>  notes;
  std::vector<std::string>  stoppedWords;
  std::vector<std::string>  searchedWords;
  int32_t updateCount;

  _NotesMetadataList__isset __isset;

  bool operator == (const NotesMetadataList & rhs) const
  {
    if (!(startIndex == rhs.startIndex))
      return false;
    if (!(totalNotes == rhs.totalNotes))
      return false;
    if (!(notes == rhs.notes))
      return false;
    if (__isset.stoppedWords != rhs.__isset.stoppedWords)
      return false;
    else if (__isset.stoppedWords && !(stoppedWords == rhs.stoppedWords))
      return false;
    if (__isset.searchedWords != rhs.__isset.searchedWords)
      return false;
    else if (__isset.searchedWords && !(searchedWords == rhs.searchedWords))
      return false;
    if (__isset.updateCount != rhs.__isset.updateCount)
      return false;
    else if (__isset.updateCount && !(updateCount == rhs.updateCount))
      return false;
    return true;
  }
  bool operator != (const NotesMetadataList &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotesMetadataList & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotesMetadataResultSpec__isset {
  _NotesMetadataResultSpec__isset() : includeTitle(false), includeContentLength(false), includeCreated(false), includeUpdated(false), includeDeleted(false), includeUpdateSequenceNum(false), includeNotebookGuid(false), includeTagGuids(false), includeAttributes(false), includeLargestResourceMime(false), includeLargestResourceSize(false) {}
  bool includeTitle;
  bool includeContentLength;
  bool includeCreated;
  bool includeUpdated;
  bool includeDeleted;
  bool includeUpdateSequenceNum;
  bool includeNotebookGuid;
  bool includeTagGuids;
  bool includeAttributes;
  bool includeLargestResourceMime;
  bool includeLargestResourceSize;
} _NotesMetadataResultSpec__isset;

class NotesMetadataResultSpec {
 public:

  static const char* ascii_fingerprint; // = "E42FF48575B3338B9BDB091F4A9EBE06";
  static const uint8_t binary_fingerprint[16]; // = {0xE4,0x2F,0xF4,0x85,0x75,0xB3,0x33,0x8B,0x9B,0xDB,0x09,0x1F,0x4A,0x9E,0xBE,0x06};

  NotesMetadataResultSpec() : includeTitle(0), includeContentLength(0), includeCreated(0), includeUpdated(0), includeDeleted(0), includeUpdateSequenceNum(0), includeNotebookGuid(0), includeTagGuids(0), includeAttributes(0), includeLargestResourceMime(0), includeLargestResourceSize(0) {
  }

  virtual ~NotesMetadataResultSpec() throw() {}

  bool includeTitle;
  bool includeContentLength;
  bool includeCreated;
  bool includeUpdated;
  bool includeDeleted;
  bool includeUpdateSequenceNum;
  bool includeNotebookGuid;
  bool includeTagGuids;
  bool includeAttributes;
  bool includeLargestResourceMime;
  bool includeLargestResourceSize;

  _NotesMetadataResultSpec__isset __isset;

  bool operator == (const NotesMetadataResultSpec & rhs) const
  {
    if (__isset.includeTitle != rhs.__isset.includeTitle)
      return false;
    else if (__isset.includeTitle && !(includeTitle == rhs.includeTitle))
      return false;
    if (__isset.includeContentLength != rhs.__isset.includeContentLength)
      return false;
    else if (__isset.includeContentLength && !(includeContentLength == rhs.includeContentLength))
      return false;
    if (__isset.includeCreated != rhs.__isset.includeCreated)
      return false;
    else if (__isset.includeCreated && !(includeCreated == rhs.includeCreated))
      return false;
    if (__isset.includeUpdated != rhs.__isset.includeUpdated)
      return false;
    else if (__isset.includeUpdated && !(includeUpdated == rhs.includeUpdated))
      return false;
    if (__isset.includeDeleted != rhs.__isset.includeDeleted)
      return false;
    else if (__isset.includeDeleted && !(includeDeleted == rhs.includeDeleted))
      return false;
    if (__isset.includeUpdateSequenceNum != rhs.__isset.includeUpdateSequenceNum)
      return false;
    else if (__isset.includeUpdateSequenceNum && !(includeUpdateSequenceNum == rhs.includeUpdateSequenceNum))
      return false;
    if (__isset.includeNotebookGuid != rhs.__isset.includeNotebookGuid)
      return false;
    else if (__isset.includeNotebookGuid && !(includeNotebookGuid == rhs.includeNotebookGuid))
      return false;
    if (__isset.includeTagGuids != rhs.__isset.includeTagGuids)
      return false;
    else if (__isset.includeTagGuids && !(includeTagGuids == rhs.includeTagGuids))
      return false;
    if (__isset.includeAttributes != rhs.__isset.includeAttributes)
      return false;
    else if (__isset.includeAttributes && !(includeAttributes == rhs.includeAttributes))
      return false;
    if (__isset.includeLargestResourceMime != rhs.__isset.includeLargestResourceMime)
      return false;
    else if (__isset.includeLargestResourceMime && !(includeLargestResourceMime == rhs.includeLargestResourceMime))
      return false;
    if (__isset.includeLargestResourceSize != rhs.__isset.includeLargestResourceSize)
      return false;
    else if (__isset.includeLargestResourceSize && !(includeLargestResourceSize == rhs.includeLargestResourceSize))
      return false;
    return true;
  }
  bool operator != (const NotesMetadataResultSpec &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotesMetadataResultSpec & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteCollectionCounts__isset {
  _NoteCollectionCounts__isset() : notebookCounts(false), tagCounts(false), trashCount(false) {}
  bool notebookCounts;
  bool tagCounts;
  bool trashCount;
} _NoteCollectionCounts__isset;

class NoteCollectionCounts {
 public:

  static const char* ascii_fingerprint; // = "4A4A773E0979C92FFBF7D8D9EE2AB6F9";
  static const uint8_t binary_fingerprint[16]; // = {0x4A,0x4A,0x77,0x3E,0x09,0x79,0xC9,0x2F,0xFB,0xF7,0xD8,0xD9,0xEE,0x2A,0xB6,0xF9};

  NoteCollectionCounts() : trashCount(0) {
  }

  virtual ~NoteCollectionCounts() throw() {}

  std::map<evernote::edam::Guid, int32_t>  notebookCounts;
  std::map<evernote::edam::Guid, int32_t>  tagCounts;
  int32_t trashCount;

  _NoteCollectionCounts__isset __isset;

  bool operator == (const NoteCollectionCounts & rhs) const
  {
    if (__isset.notebookCounts != rhs.__isset.notebookCounts)
      return false;
    else if (__isset.notebookCounts && !(notebookCounts == rhs.notebookCounts))
      return false;
    if (__isset.tagCounts != rhs.__isset.tagCounts)
      return false;
    else if (__isset.tagCounts && !(tagCounts == rhs.tagCounts))
      return false;
    if (__isset.trashCount != rhs.__isset.trashCount)
      return false;
    else if (__isset.trashCount && !(trashCount == rhs.trashCount))
      return false;
    return true;
  }
  bool operator != (const NoteCollectionCounts &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteCollectionCounts & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteEmailParameters__isset {
  _NoteEmailParameters__isset() : guid(false), note(false), toAddresses(false), ccAddresses(false), subject(false), message(false) {}
  bool guid;
  bool note;
  bool toAddresses;
  bool ccAddresses;
  bool subject;
  bool message;
} _NoteEmailParameters__isset;

class NoteEmailParameters {
 public:

  static const char* ascii_fingerprint; // = "05BC1733677D309B49001D12956AE730";
  static const uint8_t binary_fingerprint[16]; // = {0x05,0xBC,0x17,0x33,0x67,0x7D,0x30,0x9B,0x49,0x00,0x1D,0x12,0x95,0x6A,0xE7,0x30};

  NoteEmailParameters() : guid(""), subject(""), message("") {
  }

  virtual ~NoteEmailParameters() throw() {}

  std::string guid;
  evernote::edam::Note note;
  std::vector<std::string>  toAddresses;
  std::vector<std::string>  ccAddresses;
  std::string subject;
  std::string message;

  _NoteEmailParameters__isset __isset;

  bool operator == (const NoteEmailParameters & rhs) const
  {
    if (__isset.guid != rhs.__isset.guid)
      return false;
    else if (__isset.guid && !(guid == rhs.guid))
      return false;
    if (__isset.note != rhs.__isset.note)
      return false;
    else if (__isset.note && !(note == rhs.note))
      return false;
    if (__isset.toAddresses != rhs.__isset.toAddresses)
      return false;
    else if (__isset.toAddresses && !(toAddresses == rhs.toAddresses))
      return false;
    if (__isset.ccAddresses != rhs.__isset.ccAddresses)
      return false;
    else if (__isset.ccAddresses && !(ccAddresses == rhs.ccAddresses))
      return false;
    if (__isset.subject != rhs.__isset.subject)
      return false;
    else if (__isset.subject && !(subject == rhs.subject))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const NoteEmailParameters &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteEmailParameters & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class NoteVersionId {
 public:

  static const char* ascii_fingerprint; // = "D794A4D314465A1EC7A44F1EEE802646";
  static const uint8_t binary_fingerprint[16]; // = {0xD7,0x94,0xA4,0xD3,0x14,0x46,0x5A,0x1E,0xC7,0xA4,0x4F,0x1E,0xEE,0x80,0x26,0x46};

  NoteVersionId() : updateSequenceNum(0), updated(0), saved(0), title("") {
  }

  virtual ~NoteVersionId() throw() {}

  int32_t updateSequenceNum;
  evernote::edam::Timestamp updated;
  evernote::edam::Timestamp saved;
  std::string title;

  bool operator == (const NoteVersionId & rhs) const
  {
    if (!(updateSequenceNum == rhs.updateSequenceNum))
      return false;
    if (!(updated == rhs.updated))
      return false;
    if (!(saved == rhs.saved))
      return false;
    if (!(title == rhs.title))
      return false;
    return true;
  }
  bool operator != (const NoteVersionId &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteVersionId & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ClientUsageMetrics__isset {
  _ClientUsageMetrics__isset() : sessions(false) {}
  bool sessions;
} _ClientUsageMetrics__isset;

class ClientUsageMetrics {
 public:

  static const char* ascii_fingerprint; // = "E7A96B151330359E84C0A3AC91BCBACD";
  static const uint8_t binary_fingerprint[16]; // = {0xE7,0xA9,0x6B,0x15,0x13,0x30,0x35,0x9E,0x84,0xC0,0xA3,0xAC,0x91,0xBC,0xBA,0xCD};

  ClientUsageMetrics() : sessions(0) {
  }

  virtual ~ClientUsageMetrics() throw() {}

  int32_t sessions;

  _ClientUsageMetrics__isset __isset;

  bool operator == (const ClientUsageMetrics & rhs) const
  {
    if (__isset.sessions != rhs.__isset.sessions)
      return false;
    else if (__isset.sessions && !(sessions == rhs.sessions))
      return false;
    return true;
  }
  bool operator != (const ClientUsageMetrics &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ClientUsageMetrics & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RelatedQuery__isset {
  _RelatedQuery__isset() : noteGuid(false), plainText(false), filter(false), referenceUri(false) {}
  bool noteGuid;
  bool plainText;
  bool filter;
  bool referenceUri;
} _RelatedQuery__isset;

class RelatedQuery {
 public:

  static const char* ascii_fingerprint; // = "14EEB780F63E8608C64946DF68EF0269";
  static const uint8_t binary_fingerprint[16]; // = {0x14,0xEE,0xB7,0x80,0xF6,0x3E,0x86,0x08,0xC6,0x49,0x46,0xDF,0x68,0xEF,0x02,0x69};

  RelatedQuery() : noteGuid(""), plainText(""), referenceUri("") {
  }

  virtual ~RelatedQuery() throw() {}

  std::string noteGuid;
  std::string plainText;
  NoteFilter filter;
  std::string referenceUri;

  _RelatedQuery__isset __isset;

  bool operator == (const RelatedQuery & rhs) const
  {
    if (__isset.noteGuid != rhs.__isset.noteGuid)
      return false;
    else if (__isset.noteGuid && !(noteGuid == rhs.noteGuid))
      return false;
    if (__isset.plainText != rhs.__isset.plainText)
      return false;
    else if (__isset.plainText && !(plainText == rhs.plainText))
      return false;
    if (__isset.filter != rhs.__isset.filter)
      return false;
    else if (__isset.filter && !(filter == rhs.filter))
      return false;
    if (__isset.referenceUri != rhs.__isset.referenceUri)
      return false;
    else if (__isset.referenceUri && !(referenceUri == rhs.referenceUri))
      return false;
    return true;
  }
  bool operator != (const RelatedQuery &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RelatedQuery & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RelatedResult__isset {
  _RelatedResult__isset() : notes(false), notebooks(false), tags(false), containingNotebooks(false) {}
  bool notes;
  bool notebooks;
  bool tags;
  bool containingNotebooks;
} _RelatedResult__isset;

class RelatedResult {
 public:

  static const char* ascii_fingerprint; // = "EDEA62B7FAD55C6BFC17896D50B64AAD";
  static const uint8_t binary_fingerprint[16]; // = {0xED,0xEA,0x62,0xB7,0xFA,0xD5,0x5C,0x6B,0xFC,0x17,0x89,0x6D,0x50,0xB6,0x4A,0xAD};

  RelatedResult() {
  }

  virtual ~RelatedResult() throw() {}

  std::vector<evernote::edam::Note>  notes;
  std::vector<evernote::edam::Notebook>  notebooks;
  std::vector<evernote::edam::Tag>  tags;
  std::vector<evernote::edam::NotebookDescriptor>  containingNotebooks;

  _RelatedResult__isset __isset;

  bool operator == (const RelatedResult & rhs) const
  {
    if (__isset.notes != rhs.__isset.notes)
      return false;
    else if (__isset.notes && !(notes == rhs.notes))
      return false;
    if (__isset.notebooks != rhs.__isset.notebooks)
      return false;
    else if (__isset.notebooks && !(notebooks == rhs.notebooks))
      return false;
    if (__isset.tags != rhs.__isset.tags)
      return false;
    else if (__isset.tags && !(tags == rhs.tags))
      return false;
    if (__isset.containingNotebooks != rhs.__isset.containingNotebooks)
      return false;
    else if (__isset.containingNotebooks && !(containingNotebooks == rhs.containingNotebooks))
      return false;
    return true;
  }
  bool operator != (const RelatedResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RelatedResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RelatedResultSpec__isset {
  _RelatedResultSpec__isset() : maxNotes(false), maxNotebooks(false), maxTags(false), writableNotebooksOnly(false), includeContainingNotebooks(false) {}
  bool maxNotes;
  bool maxNotebooks;
  bool maxTags;
  bool writableNotebooksOnly;
  bool includeContainingNotebooks;
} _RelatedResultSpec__isset;

class RelatedResultSpec {
 public:

  static const char* ascii_fingerprint; // = "B7BD292D2A1ACF08975A53F95B397C1A";
  static const uint8_t binary_fingerprint[16]; // = {0xB7,0xBD,0x29,0x2D,0x2A,0x1A,0xCF,0x08,0x97,0x5A,0x53,0xF9,0x5B,0x39,0x7C,0x1A};

  RelatedResultSpec() : maxNotes(0), maxNotebooks(0), maxTags(0), writableNotebooksOnly(0), includeContainingNotebooks(0) {
  }

  virtual ~RelatedResultSpec() throw() {}

  int32_t maxNotes;
  int32_t maxNotebooks;
  int32_t maxTags;
  bool writableNotebooksOnly;
  bool includeContainingNotebooks;

  _RelatedResultSpec__isset __isset;

  bool operator == (const RelatedResultSpec & rhs) const
  {
    if (__isset.maxNotes != rhs.__isset.maxNotes)
      return false;
    else if (__isset.maxNotes && !(maxNotes == rhs.maxNotes))
      return false;
    if (__isset.maxNotebooks != rhs.__isset.maxNotebooks)
      return false;
    else if (__isset.maxNotebooks && !(maxNotebooks == rhs.maxNotebooks))
      return false;
    if (__isset.maxTags != rhs.__isset.maxTags)
      return false;
    else if (__isset.maxTags && !(maxTags == rhs.maxTags))
      return false;
    if (__isset.writableNotebooksOnly != rhs.__isset.writableNotebooksOnly)
      return false;
    else if (__isset.writableNotebooksOnly && !(writableNotebooksOnly == rhs.writableNotebooksOnly))
      return false;
    if (__isset.includeContainingNotebooks != rhs.__isset.includeContainingNotebooks)
      return false;
    else if (__isset.includeContainingNotebooks && !(includeContainingNotebooks == rhs.includeContainingNotebooks))
      return false;
    return true;
  }
  bool operator != (const RelatedResultSpec &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RelatedResultSpec & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}} // namespace

#endif
